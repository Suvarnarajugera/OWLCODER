//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    vector<string>powerset(string s,int p ,int n){
	        vector<string>v;
	        for(int i = 0 ; i < p ; i++){
	            string res ="";
	            for(int j = 0 ; j < n ; j++){
	                if( i & (1 << j)){
	                    res += s[j];
	                }
	            }
	            if(res ==""){
	                continue;
	            }
	            v.push_back(res);
	        }
	        sort(v.begin(),v.end());
	        return v;
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.length();
		    int p = 1 << n;
		    return powerset(s,p,n);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends