//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue <int, vector<int>, greater<int>>pq;
        if(arr.size() == 1)return 0;
        for(auto it : arr)pq.push(it);
        long long sum = 0;
        while(pq.size() > 1){
            long long r1 = pq.top();
            pq.pop();
            long long r2 = pq.top();
            pq.pop();
            long long r = r1 + r2;
            sum += r;
            pq.push(r);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends