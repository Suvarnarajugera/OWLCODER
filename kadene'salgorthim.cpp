/* it is better to swap negative numbers with 0 while computing max_sum of a contigious subarray*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int curr = 0;
    int mx = 0;
    for(int i = 0 ; i < n ; i++){
        curr += arr[i];
        if(curr < 0){
            curr = 0;
        }
        mx = max(mx,curr);
    }
    cout << mx;
}
