//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int ind ,vector<int>&v,int target,vector<int>& arr,int n,vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        for(int i = ind ; i < n ; i++){
            if(i > ind && arr[i] == arr[i-1])continue;
            if(arr[ind] > target)break;
            v.push_back(arr[i]);
            solve(i+1,v,target-arr[i],arr,n,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> &arr,int n,int k){
        //code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>v;
        solve(0,v,k,arr,n,ans);
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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends