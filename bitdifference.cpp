#include<bits/stdc++.h>
using namespace std;
int setbit(int n){
    int cnt = 0;
    while(n > 0){
        if ((n & 1 )== 1){
            cnt ++;
        }
        n = n >> 1;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cout << arr[i] << "-->" << arr[j] << endl;
            int res = setbit(arr[i]^arr[j]);
            ans += res;
        }
    }
    cout << ans;
}