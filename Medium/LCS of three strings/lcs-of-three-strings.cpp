//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        int solve(int i , int j , int k , string &A ,string &B,string &C,int n1,int n2,int n3,vector<vector<vector<int>>>&dp){
            int ans = 0;
            if(i == n1 || j == n2 || k == n3){
                return 0;
            }
            if(dp[i][j][k] != -1){
                return dp[i][j][k];
            }
            if(A[i] == B[j] && A[i] == C[k]){
                ans = 1+solve(i+1,j+1,k+1,A,B,C,n1,n2,n3, dp);
            }
            else{
                int p1 = solve(i+1,j,k,A,B,C,n1,n2,n3,dp);
                int p2 = solve(i,j+1,k,A,B,C,n1,n2,n3,dp);
                int p3 = solve(i,j,k+1,A,B,C,n1,n2,n3,dp);
                ans = max(max(p1,p2),p3);
            }
            
            return dp[i][j][k] = ans;
            
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3){
            // your code here
            vector<vector<vector<int>>>dp(n1,vector<vector<int>>(n2,vector<int>(n3,-1)));
            return solve(0,0,0,A,B,C,n1,n2,n3,dp);
            
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends