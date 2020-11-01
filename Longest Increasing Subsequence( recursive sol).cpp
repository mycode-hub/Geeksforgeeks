/* Longest Increasing Subsequence( recursive sol).cpp */
#include <bits/stdc++.h>
using namespace std;

int LIS(int *a  ,int i,int n, int prev)
{
    if(i==n)
        return 0;
    // exclude the current element 
    int include=0;
    include  = LIS(a,i+1,n,prev);
    
    // include the current element only if  curr id greater than prev
    int exclude=0;
    if(a[i] > prev)
        exclude += LIS(a  , i+1 , n ,  a[i] ) + 1;
    
    return max(include,exclude);
}


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
	    
	    cout<<LIS(a,0,n,INT_MIN)<<"\n" ; 
	}
	return 0;
}
