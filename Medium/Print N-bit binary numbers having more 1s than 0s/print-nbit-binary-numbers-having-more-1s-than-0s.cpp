//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(vector<string>&ans , string curr , int oc , int zc , int n){
        if(oc < zc){
            return;
        }
        if(curr.size() == n){
            ans.push_back(curr);
            return;
        }
        solve(ans,curr+'1',oc+1,zc,n);
        solve(ans,curr+'0',oc,zc+1,n);
        // return ;
        
    }
	vector<string> NBitBinary(int n){
	    // Your code goes here
	    vector<string>ans;
	    solve(ans,"",0,0,n);
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends