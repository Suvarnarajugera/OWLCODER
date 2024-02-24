//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int Fun(int n){
            if(n/2 == 0 || n /3 == 0 || n /3 ==0){
                return 0;
            }
            int a = max(n/2,Fun(n/2));
            int b = max(n/3,Fun(n/3));
            int c = max(n/4,Fun(n/4));
            return a+b+c;
        }
        int maxSum(int n){
            //code here.
            return max(n,Fun(n));
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends