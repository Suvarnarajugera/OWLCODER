//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int i = 0;
        int j = 0;
        int len = 0;
        int n = S.size();
        // unordered_map<char,int>mp;
        vector<int>mp(26,0);
        while(j < n){
            mp[S[j]-'a']++;
            if(mp[S[j]-'a'] == 1){
                // j++;
                len = max(len,j-i+1);
            }
            while(mp[S[j]-'a'] > 1 && i <= j){
                mp[S[i]-'a']--;
                i++;
            }
            j++;
        }
        return len;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends