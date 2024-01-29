//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void Fun(int op,int cl,int n,string &ans,vector<string>&res){
        if(op == n && cl == n){
            res.push_back(ans);
            return;
        }
        if(op <= n){
            ans+="(";
            // op+=1;
            Fun(op+1,cl,n,ans,res);
            ans.pop_back();
           
        }
        if( op > cl && cl <= n ){
            ans+=")";
            // cl += 1;
            Fun(op,cl+1,n,ans,res);
            ans.pop_back();
        }
    } 
    vector<string>AllParenthesis(int n) {
        // Your code goes here 
        string temp = "";
        vector<string>ans;
        Fun(0,0,n,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends