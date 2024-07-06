#include <bits/stdc++.h>
using ll = long long;
#define fn(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
#define f(i, m) for(int (i) = (0) ; (i) < (m) ; (i)++)
using namespace std;

void init_code(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        for(int i = 1; i <=  m ; i++){
            f(j, i){
                if(j == 0 || j == i-1){
                    cout<<1<<" ";
                }else{
                cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}