#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        res = res ^ arr[i];
    }
    while(true){
        if((res & 1) > 0){
            break;
        }
        cnt+=1;
        res = res >> 1;
    }
    int a = 0;
    int b = 0;
    for(int i = 0 ; i < n ; i++){
        if (((arr[i]) & (1 << cnt)) > 0){
            a = a ^ arr[i];
        }
        else{
            b = b ^ arr[i];
        }
    }
    cout << (a | b);
}