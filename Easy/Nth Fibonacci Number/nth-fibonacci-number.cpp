//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        long long mod = 1e9+7;
        vector<int>Fib(n+1);
        Fib[0] = 0;
        Fib[1] = 1;
        for(int i = 2 ;i <= n ; i++){
            Fib[i] = (Fib[i-1] % mod +Fib[i-2] % mod) % mod;
        }
        return Fib[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends