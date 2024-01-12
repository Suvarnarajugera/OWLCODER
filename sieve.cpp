#include<bits/stdc++.h>
using namespace std;
vector<int>sieve(int n){
    vector<int>p(n + 1,1);
    vector<int>ans;
    p[0] = 0;
    p[1] = 0;
    for(int i = 2; i * i <= n ; i++){
        if(p[i] == 1){
            for(int j = i * i ; j <= n ; j += i ){
                p[j] = 0;
            }                     
        }
    }
    for(int i = 0 ; i <= n ; i++){
        if(p[i] == 1){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int l,r;
    cin >> l >> r;
    int len = r - l + 1;
    vector<int>res = sieve(sqrt(r));
    // for(auto it : res) cout << it << " ";
    vector<int>segment(len,1);
    for(auto i : res){
        int m = (l/i)*i;
        if (m < l){
            m += i;
        }
        for(int j = max(i * i ,m) ; j <= r ; j+=i){
            segment[j-l] = 0;
        }
    }
    for(int i = l ; i <= r ; i++) {
        if(segment[i - l] == 1) cout << i << " ";
    }
    
}