//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n){
        // your code hereint
        long long mod = 1e9+7;
        int a = 0;
        int b = 1;
        int c  = 0;
        for(int i = 0 ; i < n ; i++){
            c = (a % mod + b % mod) % mod;
            a = b ;
            b = c;
        }
        return (b % mod);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends