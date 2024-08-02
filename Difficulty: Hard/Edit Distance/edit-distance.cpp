//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dp[101][101];
    int n ,m;
    int Func(string &str1,string &str2,int i,int j){
        if(i>=n){
            return m-j;
        }
        if(j>=m){
            return n-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(str1[i]==str2[j]){
            return Func(str1,str2,i+1,j+1);
        }
        else{
            int a1=1+Func(str1,str2,i,j+1);
            int a2=1+Func(str1,str2,i+1,j);
            int a3=1+Func(str1,str2,i+1,j+1);
            ans=min(a1,min(a2,a3)) ;
        }
        return dp[i][j]=ans;
    }
    int editDistance(string str1, string str2) {
        // Code here
        n = str1.size();
        m = str2.size();
        memset(dp,-1,sizeof(dp));
        return Func(str1,str2,0,0);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends