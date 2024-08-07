//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void Func(int i , int j , int n , vector<vector<int>> &arr , string temp ,vector<string>&ans,vector<vector<int>>vis){
        if(i == n - 1 && j == n - 1){
            if(arr[n-1][n-1] == 1){
                ans.push_back(temp);
                return;
            }
            return;
        }
        if(i < 0 || j < 0 || i >= n || j >= n || vis[i][j] == 1 || arr[i][j] == 0){
            return;
        }
        vis[i][j] = 1;
        Func(i+1,j,n,arr,temp+"D",ans,vis);
        Func(i-1,j,n,arr,temp+"U",ans,vis);
        Func(i,j+1,n,arr,temp+"R",ans,vis);
        Func(i,j-1,n,arr,temp+"L",ans,vis);
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string>ans;
        int n = mat.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        string temp;
        Func(0,0,n,mat,temp,ans,vis);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends