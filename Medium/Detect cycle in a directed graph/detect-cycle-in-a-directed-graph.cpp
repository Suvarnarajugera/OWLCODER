//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool detectcycle(int node , vector<int>adj[],vector<bool>&vis,vector<bool>&v){
    	vis[node]=true;
    	v[node]=true;
    	for(auto it : adj[node]){
    		if(!vis[it] && !v[it]){
    			if(detectcycle(it,adj,vis,v)){
    				return true;
    			}
    		}
    		else if(v[it] == true && vis[it] == true){
    			return true;
    		}
    	}
    	v[node]=false;
    	return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>vis(V,false);
        vector<bool>st(V,false);
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                if(detectcycle(i,adj,vis,st)){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends