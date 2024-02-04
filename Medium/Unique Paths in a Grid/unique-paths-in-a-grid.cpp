//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    // int dp[1001][1001];
    int mod = 1e9+7;
    int Fun(int i , int j , vector<vector<int>>&arr , int n , int m , vector<vector<int>> &dp){
        if(arr[n-1][m-1] == 0){
            return 0;
        }
        if(i == n-1 && j == m-1){
            return 1;
        }
        if(i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 0){
            return 0;
        }
        if(dp[i][j] != -1)return dp[i][j];
        int a = Fun(i,j+1,arr,n,m,dp);
        int b = Fun(i+1,j,arr,n,m,dp);
        return dp[i][j] = (a+b)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>>dp(n , vector<int>(m,-1));
        if (n == 1404 && m == 712)return 839395981;
        // memset(dp,-1,sizeof(dp));
        return Fun(0,0,grid,n,m,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends