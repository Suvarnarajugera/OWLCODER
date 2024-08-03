//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int Row_sum(vector<vector<int>>&mat,int ind){
        int sum = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(i == ind){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
    int Col_sum(vector<vector<int>>&mat ,int ind){
        int sum = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(j == ind){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int,int>>arr;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                int row = Row_sum(mat,i);
                int col = Col_sum(mat,j);
                if(row == 0 && col == n-1){
                    return i;
                }
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends