//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void Fun(vector<vector<int>>&grid,int i , int j , int n , int m , int old , int nw ,vector<vector<int>>&vis){
    // 	if(i == n - 1 && j == m - 1){
    // 		return;
    // 	}
    	if(i >= n || j >= m || i < 0 || j < 0 || grid[i][j] != old||vis[i][j] == 1){
    		return;
    	}
    // 	image[sr][sc]=newColor;
        vis[i][j]=1;
    	grid[i][j]=nw;
    	Fun(grid,i-1,j,n,m,old,nw,vis);
    	Fun(grid,i+1,j,n,m,old,nw,vis);
    	Fun(grid,i,j-1,n,m,old,nw,vis);
    	Fun(grid,i,j+1,n,m,old,nw,vis);
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int n = image.size();
        int m = image[0].size();
        int intial = image[sr][sc];
        vector<vector<int>>vis(n,vector<int>(m,0));
        Fun(image,sr,sc,n,m,intial,newColor,vis);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends