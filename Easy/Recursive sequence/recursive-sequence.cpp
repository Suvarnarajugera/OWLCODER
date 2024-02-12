//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long mod = 1e9+7;
    long long Fun(int temp, int curr,int N) {
    	int i;
        long long cur = 1;
    	if (curr == N + 1) 
    		return 0;
    	for (i = temp; i < temp + curr; i++)
    		cur = (cur%mod *i)%mod;
    	return (cur % mod  + Fun(i, curr + 1, N) % mod) %mod; 
    }
    long long sequence(int n){
        long long ans = 1;
        long long curr = 1;
        return Fun(ans,curr,n);
        
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends