#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        if(m%2 == 1){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        for(int i = 0 ; i < m/2 ; i++){
            cout<<"AAB";
        }

        cout<<endl;
    }

    return 0;
}