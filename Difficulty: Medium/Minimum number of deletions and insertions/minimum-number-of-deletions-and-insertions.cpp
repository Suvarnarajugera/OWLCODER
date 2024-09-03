//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int dp[1001][1001];
	int Func(string &s1,string &s2,int n,int m){
	    if(n == 0 || m == 0){
	        return 0;
	    }
	    if(dp[n][m] != -1)return dp[n][m];
	    if(s1[n-1] == s2[m-1]){
	       return dp[n][m] = 1 + Func(s1,s2,n-1,m-1);
	    }
	    else{
	        return dp[n][m] = max(Func(s1,s2,n-1,m),Func(s1,s2,n,m-1));
	    }
	}
	int minOperations(string str1, string str2) { 
	    // Your code goes here
	    int n = str1.size();
	    int m = str2.size();
	    memset(dp,-1,sizeof(dp));
	    return n + m - 2 * Func(str1,str2,n,m);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends