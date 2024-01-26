//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void sum(vector<int> &arr , int ind ,int k , int n , vector<int>&v,vector<vector<int>>&ans){
        if(ind == n){
            if(k == 0){
                ans.push_back(v);
            }
            return;
        }
        if(arr[ind] <= k){
            v.push_back(arr[ind]);
            k = k - arr[ind];
            sum(arr,ind,k,n,v,ans);
            k = k + arr[ind];
            v.pop_back();
        }
        sum(arr,ind+1,k,n,v,ans);
    }
    vector<vector<int> > combinationSum(vector<int> &arr, int k) {
        // Your code here
        set<int>st(arr.begin(),arr.end());
        vector<int>res(st.begin(),st.end());
        sort(res.begin(),res.end());
        vector<vector<int>>ans;
        vector<int>v;
        int n = res.size();
        sum(res,0,k,n,v,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends