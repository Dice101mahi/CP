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