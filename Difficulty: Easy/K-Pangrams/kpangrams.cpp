//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k){
        int n=0;
        vector<int>freq(26,0);
        for(int i=0;i<str.size();i++){
            if(str[i]>=97 && str[i]<=122)
                n++;
        }
        if(n<26)return false;
        for(auto z:str){
            if(z>=97 && z<=122)
                freq[z-97]++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0)
                count++;
        }
        return (count<=k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends