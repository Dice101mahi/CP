#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n;

        if(2*n+1 > m){
            cout<<-1<<endl;
            continue;
        }

        for(int i = 1 ; i <= m ; i++){
            if(i%2 == 0 && n >0){
                cout<<i+1<<" "<<i<<" ";
                i++;
                n--;
            }else{
                cout<<i<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}