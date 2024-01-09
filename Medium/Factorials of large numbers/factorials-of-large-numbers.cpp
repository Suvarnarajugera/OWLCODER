//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        int carry = 0;
        int len = 1;
        vector<int>res;
        // vector<int>ans;
        res.push_back(1);
        for(int i = 1 ; i <= N ; i++){
            for(int j = 0 ; j < len ; j++){
                int prod = (res[j] * i) + carry;
                res[j] = prod % 10;
                carry = prod / 10;
            }
            while(carry != 0){
                res.push_back(carry % 10);
                carry = carry / 10;
                len++;
            }
            
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends