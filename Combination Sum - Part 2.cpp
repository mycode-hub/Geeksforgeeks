// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    void helper( vector<int> &A, vector<vector<int>>&ans, int B, vector<int> &temp , int i)
    {
        if(i >= A.size() || B < 0)
            return;
        if( B==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int k = i ; k< A.size() ; k ++)
        {
            temp.push_back(A[k]);
            helper(A,ans,B-A[k],temp,k+1);
            temp.pop_back();
            while( k < A.size() && A[k] == A[k+1] )
            {
                k++;
            }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int> &A, int N, int B){
        vector<vector<int>> ans;
        sort(A.begin(),A.end());
        vector<int> temp;
        helper(A,ans, B,temp,0);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N, x, B;
        cin>>N;
        vector<int> A;
        for(int i = 0;i < N;i++)
        {
            cin>>x;
            A.push_back(x);
        }
        cin>>B;
        
        Solution ob;
        vector<vector<int>> result;
        result = ob.combinationSum(A, N, B);
        
        if(result.size() == 0)
        cout<<"Empty"<<endl;
        else{
            for(int i = 0;i < result.size(); i++){
                cout<<"(";
                for(int j = 0; j < result[i].size();j++){
                    cout<<result[i][j];
                    if(j < result[i].size() - 1)
                    cout<<" ";
                }
                cout<<")";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends
