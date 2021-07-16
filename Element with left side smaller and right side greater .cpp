// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int a[n]={0} , b[n]={0};
    a[0]= arr[0] , b[n-1] = arr[n-1];
    for(int i = 1 ; i < n ; i ++)
    {
        a[i] = max( a[i-1] , arr[i] );
        b[n-1-i] = min ( b[n-i] , arr[n-1-i]);
    }
    for(int i = 1; i < n-1 ; i ++)
    {
        if( a[i] == arr[i] && b[i] == arr[i] )
            return a[i];
    }
    return -1;
}
