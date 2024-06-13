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

        vector<int> a(m);

        f(i, m){
            cin>>a[i];
        }

        vector<map<array<int, 2>, vector<int>>> vmap(3);

        f(i, m-2){
            vmap[0][{a[i], a[i+1]}].push_back(a[i+2]);
            vmap[1][{a[i], a[i+2]}].push_back(a[i+1]);
            vmap[2][{a[i+1], a[i+2]}].push_back(a[i]);
        } 

        ll ans = 0;

        
    }

    return 0;
}