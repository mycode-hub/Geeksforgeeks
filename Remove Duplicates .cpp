// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    char a[26]={0};
	    int j =0;
	    for(int i=0;i < s.length() ;i++)
	    {
	        if( a[s[i]-'a'] == 0 )
	            a[s[i] -'a'] = 1;
	        else
	           continue;
	        s[j++] = s[i];
	    }
	    return s.substr(0,j);
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
