//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n = s.size();
        int ans = 0;
        if(s[0]-'0' == -3){
            int p = 1;
            for(int i = n -1 ; i >=1 ; i--){
                if(s[i]-'0' >= 0 && s[i]-'0' <= 9){
                    ans = ans + ((s[i]-'0') * p);
                    p *= 10;
                }
                else{
                    return -1;
                }
            }
            return ans*-1;
        }
        else{
            int p = 1;
            for(int i = n -1 ; i >=0 ; i--){
                if(s[i]-'0' >= 0 && s[i]-'0' <= 9){
                    ans = ans + ((s[i]-'0') * p);
                    p *= 10;
                }
                else{
                    return -1;
                }
            }
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends