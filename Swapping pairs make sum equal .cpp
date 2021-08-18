// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int k)
	{
        map<int,int> m ; 
        int sum1 = 0;
        for(int i =0;i < n ; i ++)
        {
            int x = A[i];
            m[x]++;
            sum1+= x;
        }
        int sum2 = 0 ;
        for(int i =0;i < k ; i ++)
        {
            sum2 += B[i];
        }
        int diff = ( sum1-sum2);
        if( diff %2 != 0 )
            return  -1;
        diff /= 2;
        //cout<<diff;
        for(int i =0;i <  k; i ++)
            if( m.find(diff + B[i]) != m.end())
                return 1;
        return -1;

	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends
