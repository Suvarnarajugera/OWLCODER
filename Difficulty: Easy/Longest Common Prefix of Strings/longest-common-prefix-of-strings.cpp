//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        string s = *min_element(arr.begin(), arr.end());
        for(int i=0; i < arr.size(); i++) {
            int j = 0;
            for(; j < s.size(); j++) {
                if(s[j] != arr[i][j])break;   
            }
            s = min(s, arr[i].substr(0, j));
        }
       if(s.size() > 0)return s;
       return "-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends