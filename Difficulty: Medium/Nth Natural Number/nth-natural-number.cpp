//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
        // code here.
        long long start = n;
        string ans = "";
        while(start){
            int r = start % 9;
            ans += '0'+r;
            start = start/9;
        }
        reverse(ans.begin(),ans.end());
        long long final = stoll(ans);
        return final;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends