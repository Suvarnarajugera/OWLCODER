#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long N = 1e5+1;
long long BE(long long a, long long b){
    long long ans = 1;
    while(b){
        if(b&1){
            ans = ans * a;
            ans = ans % mod;
        }
        a = a * a;
        a = a % mod;
        b = b / 2;
    }
    return ans;
}
vector<int>Fact(N);
vector<int>InvFact(N);
void preFact(){
    Fact[0] = 1;
    InvFact[0] = 1;
    for(int i = 1 ; i < N ; i++){
        Fact[i] = Fact[i-1] * i;
        Fact[i] %= mod;
        InvFact[i] = BE(Fact[i], mod-2);
    }

}
int main(){
    preFact();
    int n , r;
    cin >> n >> r;
    int ans = (Fact[n] % mod * InvFact[r] % mod * InvFact[n-r] %mod)%mod; 
    cout << ans;
}