//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
    int sumofdigit(int n){
        int curr = n ;
        int sum=0;
        while(curr > 0){
            sum += curr % 10;
            curr /= 10;
        }
        return sum;
    }    
    
    int smithNum(int n) {
        int sum=0;
        int curr=sumofdigit(n);
        int res=n;
        for(int i=2;i*i<=n;i++){
            while(n % i == 0){
                sum += sumofdigit(i);
                n /= i;
            }
        }
        if(n > 1){
            sum+=sumofdigit(n);
        }
        if(res == n){
            return 0;
        }
        if(curr == sum){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends