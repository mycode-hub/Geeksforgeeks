// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int longestKSubstr(string s, int k) {
        map<char, int> m ;
        int  n = s.length();
        int i =0, count = 0 , mx = INT_MIN ;
        for(int j = 0 ; j < n ;j++ )
        {
            m[s[j]]++;
            if( m[s[j]]==1 ) 
                count++;
            if( count == k )
                mx = max( mx , j - i + 1);
            else if( count > k )
            {
                while( count > k )
                {
                    m[s[i]] -- ;
                    if( m[s[i]] == 0 )
                        count--;
                    i++;
                }
            }
        }
    
        if( mx == INT_MIN)
            return -1;
        return mx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
