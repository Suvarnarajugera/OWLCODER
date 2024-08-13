//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long mod = 1e9+7;
    long long power(long long A, long long B){
        if (B == 0)
            return 1;
    
        long long res = power(A, B / 2);
    
        if (B % 2)
            return res * res * A;
        else
            return res * res;
    }
    long long int floorSqrt(long long int n) {
        // Your code goes here
        // return pow(n,0.5)%mod;
        // return power(n,0.5);
        return sqrt(n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends