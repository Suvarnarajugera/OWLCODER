//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long mod = 1e9 + 7;
    long long power(long long a, long long b) {
        long long result = 1;
        // long long mod = 1e9 + 7;
        while(b) {
            if(b & 1) {
                b--;
                result = ((result % mod) * (a % mod)) %mod;
            }
            else {
                b = b / 2;
                a = ((a % mod) * (a % mod)) %mod;
            }
        }
        return result;
    }
    int nCr(int n, int r){
        if(r > n) return 0;
        vector<long long>fact(n+1);
        vector<long long>invfact(n+1);
        fact[0] = 1;
        invfact[0] = 1;
        // long long result = 1;
        for(int i = 1 ; i <= n ; i++) {
            fact[i] = fact[i - 1] * i;
            fact[i] %= mod;
            invfact[i] = power(fact[i], mod - 2);
        }
        int ans = (fact[n] % mod * invfact[n - r] % mod * invfact[r] % mod) % mod;
        return ans;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends