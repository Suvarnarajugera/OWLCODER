//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int Func(int ind ,vector<int>&val,vector<int>&wt,int weight,int n){
        if(ind >= n){
            return 0;
        }
        int p = 0;
        int np = 0;
        if(wt[ind] <= weight){
            p = val[ind] + Func(ind+1,val,wt,weight-wt[ind],n);
        }
        np = Func(ind+1,val,wt,weight,n);
        return max(p,np);
        
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n = val.size();
        return Func(0,val,wt,W,n);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends