#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,p1,p2,n;
    cin >> x >> p1 >> p2 >> n;
    while(n){
        int s1 = x & (1 << p1);
        int s2 = x & (1 << p2);
        if (s1 > 0 and s2 > 0 or (s1 == s2)){
            p1++;
            p2++;
        }
        else{
            x = x ^ (1 << p1);
            x = x ^ (1 << p2);
            p1++;
            p2++;
        }
        n--;
    }
    cout << x;
}