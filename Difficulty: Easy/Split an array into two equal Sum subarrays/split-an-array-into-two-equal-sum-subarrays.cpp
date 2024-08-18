//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int curr = 0;
        int mx = 0;
        for(auto it : arr)mx += it;
        int cnt = 0;
        if(mx % 2){
            return false;
        }
        mx = mx/2;
        for(int i = 0 ; i < arr.size() ; i++){
            curr += arr[i];
            if(curr == mx){
                cnt++;
                curr = 0;
            }
        }
        if(cnt == 2)return true;
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends