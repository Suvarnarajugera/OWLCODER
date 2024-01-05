#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q , l , r;
    cin >> n >> q;
    int arr[n];
    vector<vector<int>>res;
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
   
        for(int i = 0 ; i < n; i++){
            vector<int>vis;
            for(int j = 0 ; j < 32 ; j++){
                if((arr[i]&(1<<j))>0){
                    if(i==0)vis.push_back(1);
                    else{
                        vis.push_back((res[i-1][j])+1);}
                }
                else{
                    if(i==0)vis.push_back(0);
                    else{
                        vis.push_back((res[i-1][j]));
                        }
                }
            }
            res.push_back(vis);
        }

        // for(auto it:res){
        //     for(auto a:it){
        //         cout<<a<<" ";
        //     }
        //     cout<<endl;
        // }   
        while(q){
            int l, r;
            cin >> l >> r;
            int ans = 0;
            for(int i = 0; i < 32; i++){
                int d;
                if(l != 0){
                    d = res[r][i] - res[l - 1][i];
                }
                else{
                    d = res[r][i];
                }
                if((r -l + 1) == d){
                    ans += (1 << i);
                }
            }
            cout << ans;
            q--;
        }     
    
}