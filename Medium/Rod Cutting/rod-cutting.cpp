//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int dp[1001];
    int Fun(int *arr , int n){
        if(n == 0)return 0;
        int ans = INT_MIN;
        if(dp[n] != -1)return dp[n];
        for(int i = 0 ; i < n ; i++){
            int len = i+1;
            int res = arr[i]+Fun(arr,n-len);
            ans = max(res,ans);
        }
        return dp[n] = ans;
    }
    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        return Fun(price,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends