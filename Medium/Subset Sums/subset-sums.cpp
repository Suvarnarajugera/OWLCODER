//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>powerSet(vector<int> &arr,int p , int n){
        vector<int>v;
        for(int i = 0 ; i < p ; i++){
            int sum = 0;
            for(int j = 0 ; j < n ; j++){
                if(i & (1 << j)){
                    sum += arr[j];
                }
            }
            v.push_back(sum);
        }
        return v;
    }
    vector<int> subsetSums(vector<int> arr, int N){
        // Write Your Code here
        int p = 1 << N;
        vector<int>res = powerSet(arr,p,N);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends