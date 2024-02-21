//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i , int j , vector<vector<char>>&arr , vector<vector<int>>&vis , int n , int m){
    	if(i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == '0' || vis[i][j] == 1){
    		return;
    	}
    	vis[i][j] = 1;
    	dfs(i-1,j,arr,vis,n,m);
    	dfs(i+1,j,arr,vis,n,m);
    	dfs(i-1,j-1,arr,vis,n,m);
    	dfs(i-1,j+1,arr,vis,n,m);
    	dfs(i,j-1,arr,vis,n,m);
    	dfs(i,j+1,arr,vis,n,m);
    	dfs(i+1,j-1,arr,vis,n,m);
    	dfs(i+1,j+1,arr,vis,n,m);
    }
    int numIslands(vector<vector<char>>& arr) {
        // Code here
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt = 0;
    	for(int i = 0 ; i < n ; i++){
    		for(int j = 0 ; j < m ; j++){
    			if(vis[i][j] == 0 && arr[i][j] == '1'){
    				dfs(i,j,arr,vis,n,m);
    				cnt += 1;
    			}
    		}
    	}
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends