// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    void calfact(vector<int> &a, int x )
    {
        unsigned long long carry = 0;
        unsigned long long pro = 0;
        for(int i =0;i < a.size() ; i ++)
        {
            pro = a[i] * x +carry;
            a[i] = (pro ) %10;
            carry = (pro) /10;
        }
        while( carry)
        {
            a.push_back(carry %10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        vector<int> a;
        a.push_back(1);
        int size = 1;
        for(int i = 1; i <= N; i++)
            calfact( a, i );
        reverse(a.begin(), a.end());
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
