//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    // int dp[1001];
    int Func(int n,int x,int y,int z,vector<int>&dp){
        if(n < 0)return INT_MIN;
        else if(n == 0)return 0;
        else if(dp[n] != -1)return dp[n];
        int t1 = Func(n-x,x,y,z,dp);
        int t2 = Func(n-y,x,y,z,dp);
        int t3 = Func(n-z,x,y,z,dp);
        return dp[n] = 1 + max(t1,max(t2,t3));
    }
    int maximizeTheCuts(int n, int x, int y, int z){
        //Your code here
        // memset(dp,sizeof(dp),-1)
        vector<int>dp(n+1,-1);
        int ans = Func(n,x,y,z,dp);
        return max(ans,0);
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends