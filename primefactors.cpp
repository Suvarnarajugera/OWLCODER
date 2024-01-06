#include<bits/stdc++.h>
using namespace std;
int Fun(int n) 
{
    vector<int>v;
    while (n % 2 == 0){ 
        v.push_back(2); 
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i++){ 
        while (n % i == 0){ 
            v.push_back(i); 
            n = n/i; 
        } 
    } 
    if (n > 2) v.push_back(n); 
    return v.size();
} 
int main(){
    int a,b;
    int cnt = 0;
    for(int i = a ; i <= b ; i++){
        cnt += Fun(i);
    } 
    cout << cnt;
}