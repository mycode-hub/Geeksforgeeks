#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a = new int[n];
	    for(int i=0;i<n;i++ )
	        cin>>a[i];
	    int *dp = new int[n]();
	    //memset(dp , -1, sizeof(int)*n);
	    int m=1;
	    for(int i=0;i<n;i++ )
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if( a[i] > a[j] )
                    dp[i] = max(dp[i], dp[j]+1 );
            }
            m = max(m ,dp[i] ) ;
            
        }
        cout<<m;
        cout<<"\n";
	}
	return 0;
}
