//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>ans(N+1,1),res;
        int sq = sqrt(N);
        ans[0] = 0;
        ans[1] = 0;
        for (int p=2; p*p<=N; p++){
            if (ans[p] == true){
                for (int i=p*2; i<=N; i += p)
                    ans[i] = false;
            }
        }
        for(int i = 2 ; i < N+1 ; i++){
            if(ans[i] == 1){
                res.push_back(i);
            }
        }
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
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends