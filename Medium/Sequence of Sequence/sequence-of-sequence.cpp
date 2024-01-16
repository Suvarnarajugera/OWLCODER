//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int Fun(int m , int n){
        if(n == 0){
            return 1;
        }
        if(2 * m < n){
            return 0;
        }
        return Fun(m/2,n-1)+Fun(m-1,n);
    }
    int numberSequence(int m, int n){
        int sum = Fun(m,n);
        return sum;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends