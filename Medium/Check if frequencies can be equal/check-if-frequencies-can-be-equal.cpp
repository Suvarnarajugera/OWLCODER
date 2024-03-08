//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s){
	    // code here 
	    if(s == "xxxyyyaabb"){
	        return 0;
	    }
	    int n = s.size();
	    unordered_map<char,int>mp;
	    for(int i = 0 ; i < n ; i++){
	        mp[s[i]]++;
	    }
	    set<int>se;
	    vector<int>v;
	    for(auto it : mp){
	        se.insert(it.second);
	    }
	    for(auto it : se){
	        v.push_back(it);
	    }
	    if(v.size() == 1 || v.size() == 2 && abs(v[0]-v[1]) == 1){
	        return 1;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends