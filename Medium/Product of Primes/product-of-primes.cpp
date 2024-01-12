//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<long long>sieve(long long n){
        vector<long long>p(n+1,1);
        vector<long long>ans;
        p[0] = 0;
        p[1] = 0;
        for(long long i = 2 ; i * i <= n ; i++){
            if(p[i] == 1){
                for(long long j = i * i ; j <= n ; j+=i){
                    p[j] = 0;
                }
            }
        }
        for(long long i = 0 ; i <= n ; i++){
            if(p[i] == 1){
                ans.push_back(i);
            }
        }
        return ans;
    }
    long long primeProduct(long long L, long long R){
        // code here
        long long mod = 1e9+7;
        long long ans = 1;
        long long len = R - L + 1;
        vector<long long>res = sieve(sqrt(R));
        vector<long long>segment(len,1);
        for(auto i : res){
            long long m = (L/i)*i;
            if(m < L){
                m = m + i;
            }
            for(long long j = max(i*i,m) ; j <= R ; j+=i){
                segment[j-L] = 0;
            }
        }
        for(long long i = L ; i <= R ; i++){
            if(segment[i-L] == 1){
                ans = (ans % mod * i % mod) % mod;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends