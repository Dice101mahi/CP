#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        if(m%2 == 1){
            for(int i = 0 ; i < m ; i++){
                cout<<i+1<<" ";
            }
            cout<<endl;
        }else{
            for(int i = 0 ; i < m ; i++){
                cout<<(i+1)*2<<" ";
            }
            cout<<endl;            
        }
    }

    return 0;
}