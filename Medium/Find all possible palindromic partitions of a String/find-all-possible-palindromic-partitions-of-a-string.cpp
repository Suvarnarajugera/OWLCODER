//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void Fun(int idx,int n , string &s , vector<string>&temp,vector<vector<string>>&ans){
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        for(int i = idx ; i < n ; i++){
            string sub = s.substr(idx,i-idx+1);
            // cout << string(sub.rbegin(),sub.rend()) << " ";
            if(sub == string(sub.rbegin(),sub.rend())){
                // cout << string(sub.rbegin(),sub.rend()) << " ";
                temp.push_back(sub);
                Fun(i+1,n,s,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        int n = S.size();
        vector<string>temp;
        vector<vector<string>>ans;
        Fun(0,n,S,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends