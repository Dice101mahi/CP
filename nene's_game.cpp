#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n;

        int a[m];

        for(int i = 0 ; i < m ; i++){
            cin>>a[i];
        }

        while(n--){
            cin>>o;

            if(a[0] <= o){
                cout<<a[0]-1<<" ";
            }else{
                cout<<o<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}