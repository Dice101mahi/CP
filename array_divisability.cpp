#include <bits/stdc++.h>
using ll = long long;
#define  in(a,m)  for(int i = 0 ; i < m ; i++) cin>>a[i];
#define fm(i, m, n) for(int (i) = 0 ; (i) < (m) ; i += n)
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
#define f(i, m) for(int (i) = 0 ; (i) < (m) ; (i)++)
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

        f(i, m){
            cout<<i+1<<" ";
        }

        cout<<endl;
    }

    return 0;
}