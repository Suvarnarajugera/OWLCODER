//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        map<char,int>mpp;
        for(int i = 0 ; i < s.size() ; i++){
            char str = tolower(s[i]);
            if(str-'0' >= 49 && str-'0' <= 74){
                mpp[str]++;
            }
        }
        if(mpp.size() == 26){
            return 1;
        }
        else{
            return 0;
        }// your code here
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends