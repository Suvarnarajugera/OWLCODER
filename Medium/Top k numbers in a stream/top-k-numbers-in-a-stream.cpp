//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        // code here
        unordered_map<int, int>mpp;
        set<pair<int, int>>s;
        vector<vector<int>> ans;
        for(int i = 0; i < N; ++i) {
            vector<int> res;
            if(mpp[arr[i]] > 0) {
                s.erase({-mpp[arr[i]], arr[i]});
            }
            
            mpp[arr[i]]++;
            s.insert({-mpp[arr[i]], arr[i]});
            int cnt = K;
            for(auto it : s) {
                if(cnt == 0){
                    break;
                }
                res.push_back(it.second);
                cnt -= 1;
            }
            ans.push_back(res);
        }
        return ans;
        }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> a(N);
        Array::input(a,N);
        
        Solution obj;
        vector<vector<int>> res = obj.kTop(a, N, K);
        
        for(auto it:res)
            Array::print(it);
        
    }
}

// } Driver Code Ends