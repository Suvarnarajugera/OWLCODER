#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    int ans=0;
    for(int i=0;i<=31;i++){
        int setbits=0;
        for(int j=0;j<N;j++){
            if((arr[j]>>i&1)%2==1){
                setbits++;
            }
        }
        if(setbits%3){
            ans=ans|(1<<i);
        }
    }
    cout << ans;
}
