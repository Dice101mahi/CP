#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ll t, m, n, o;

    cin>>t;

    while(t--){
        cin>>m;

        int a[m];

        if(m%2 == 0){
            for(int i = m-2 ; i > 1 ; i--){
                cout<<i<<" ";
            }

            cout<<1<<" "<<m-1<<" "<<m;
        }else{
            for(int i = m-3 ; i > 1 ; i--){
                if(i != 0){
                    cout<<i<<" ";
                }
            }

            cout<<m-2<<" "<<1<<" "<<m-1<<" "<<m;
        }

        cout<<endl;
    }

    return 0;
}