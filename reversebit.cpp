#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int temp = 32;
    long long rev=0;
    while(temp --){
        rev=rev<<1;
        rev = rev | (n & 1);
        n = n >> 1;
        
    }
    cout << rev;
}
