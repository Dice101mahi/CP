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
        cin>>m>>n>>o;

        if((m+n+o)%2 == 1){
            cout<<-1<<endl;
        }else{
            int sum = 0;

            if(m+n <= o){
                cout<<n+m<<endl;
            }else{
                cout<<o+(m+n-o)/2<<endl;
            }
        }
    }

    return 0;
}