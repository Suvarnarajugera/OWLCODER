//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int Func(int i,int j,string& a,string& b,vector<vector<int>>&dp){
        if(i >= a.size() || j >= b.size()){
            return 0;
        }
        if(dp[i][j] != -1)return dp[i][j];
        if(a[i] == b[j]){
            return dp[i][j] = 1 + Func(i+1,j+1,a,b,dp);
        }
        return dp[i][j] = max(Func(i+1,j,a,b,dp),Func(i,j+1,a,b,dp));
    }
    int countMin(string str){
    //complete the function here
        string res = str;
        reverse(str.begin(),str.end());
        int n = str.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int l = Func(0,0,res,str,dp);
        return n-l;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends