//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dp[101][101][101];
    int Fun(int i , int j , int n , int k , vector<vector<int>>&arr){
        if(i == n-1 && j == n-1){
            if(k == arr[i][j]){
                return 1;
            }
            return 0;
        }
        if(i < 0 || j < 0 || i >= n || j >= n || k < 0){
            return 0;
        }
        if(dp[i][j][k] != -1)return dp[i][j][k];
        int a = Fun(i+1,j,n,k-arr[i][j],arr);
        int b = Fun(i,j+1,n,k-arr[i][j],arr);
        return dp[i][j][k] = a+b;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        // Code Here
        memset(dp,-1,sizeof(dp));
        return Fun(0,0,n,k,arr);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends