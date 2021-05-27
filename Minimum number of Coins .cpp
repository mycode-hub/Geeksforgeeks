// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        vector<int> result;
        int a [] = { 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        for(int i = 0 ; (i < 10) && (n > 0) ; i++)
        {
          
            if( a[i] <= n)
            {
                int no = n / a[i];
                n = n % a[i];
                while(no--)
                    result.push_back(a[i]);
            }
        }
        return result;
    }
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
