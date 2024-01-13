//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
public:
    vector<int> seive(int n){
        vector<int> primes(n + 1, 0);
        for(int i = 2; i <= n; i++){
            if(primes[i] == 0){
                for(int j = i; j <= n; j += i){
                    primes[j] = i;
                }
            }
        }
      
        return primes;
    }
    long long totalDivisors(int N){
        // code here
        vector<int> p = seive(N);
        long long ans = 1;
        map <int, int> mpp;
        for(int i = 2; i <= N; i++){
            int n = i;
            while(n != 1){
                mpp[p[n]]++;
                n /= p[n];
            }
        }
        for(auto it:mpp){
            ans *= (it.second + 1);
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.totalDivisors(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends