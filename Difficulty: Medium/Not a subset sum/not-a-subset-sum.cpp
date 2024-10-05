//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        // int mn = *min_element(arr.begin(),arr.end());
        // if(mn != 1)return 1;
        // int x = 1;
        // for(int i = 0 ; i < arr.size() ; i++){
        //     if(arr[i] != x){
        //         return x;
        //     }
        //     x++;
        // }
        // return x;
        int ans = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > ans)return ans;
            ans += arr[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.findSmallest(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends