//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n = x.size();
        stack<char>st;
        for(int i = 0 ; i < n ; i++){
            if(x[i] == '{' || x[i] == '[' || x[i] == '('){
                st.push(x[i]);
            }
            else if(!st.empty() && st.top() == '[' && x[i] == ']'){
                st.pop();
            }
            else if(!st.empty() && st.top() == '{' && x[i] == '}'){
                st.pop();
            }
            else if(!st.empty() && st.top() == '(' && x[i] == ')'){
                st.pop();
            }
            else{
                return false;
            }
        }
        if(st.empty())return true;
        else return false;
    }

};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends