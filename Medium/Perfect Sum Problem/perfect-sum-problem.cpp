//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	int mod = 1e9+7;
    int solve(int i,int *arr,int sum,vector<vector<int>>&dp){
        if(sum==0) return 1;
        if(i==0) return arr[i]==sum;
        if(dp[i][sum]!=-1) return dp[i][sum];
        
        int a  = 0;
        if(sum-arr[i]>=0 && arr[i]!=0){
            a = solve(i-1,arr,sum-arr[i],dp)%mod;
        }
        int b = solve(i-1,arr,sum,dp)%mod;
        return dp[i][sum] = (a+b)%mod; 
    }
    public:
	int perfectSum(int arr[], int n, int sum){
	    int cnt=0;
	    long long int val=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            cnt++;
	            val = val*2;
	        }
	    }
	    vector<vector<int>>dp(n,vector<int>(sum+1,-1));
	    return val*solve(n-1,arr,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends