//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int sum = 0;
        unordered_map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it = mp.begin() ; it != mp.end() ; it++){
            pq.push({it->second,it->first});
        }
        while(!pq.empty() && k--){
            pair<int,char>p = pq.top();
            mp[p.second]--;
            pq.pop();
            pq.push({mp[p.second],p.second});
        }
        while(!pq.empty()){
            sum=sum+pq.top().first*pq.top().first;
            pq.pop();
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends