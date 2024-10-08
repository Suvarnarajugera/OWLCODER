//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int cnt = 0;
        int sum = 0;
        for(int i = arr.size()-2 ; i >= 0 ; i--){
            if(arr[i] == arr[i+1]){
                continue;
            }
            else{
                sum += arr[i+1];
                sum += arr[i];
                cnt++;
                if(cnt == 1){
                    break;
                }
            }
            
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends