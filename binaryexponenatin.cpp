#include<bits/stdc++.h>
using namespace std;
int BE(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1){
            b = b - 1;
            ans = ans * a;
        }
        else{
            b = b / 2;
            a = a * a;
        }
    }
    return ans;
}
int inverse(int n,long long mod){
    int x = BE(n,mod-2);
    return x;
}
int main(){
    int a , b;
    long long mod = 1e9+7;
    cin >> a >> b;
    cout << BE(a,b) << endl;
    cout << inverse(2,mod);
}