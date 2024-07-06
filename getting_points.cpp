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

ll cost(ll mid, ll m, ll o, ll p){
    ll task = (m-1)/7+1;

    ll cost = (min(2*mid, task)*p)+(mid*o);

    return cost;
}

ll lb(ll m, ll n, ll o, ll p){
    ll l = 1, h = m, mid;

    while(l < h){
        mid = l+(h-l)/2;

        if(cost(mid, m, o, p) < n){
            l = mid+1;
        }else{
            h = mid;
        }
    }

    return l;
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n>>o>>p;

        cout<<m-lb(m, n, o, p)<<endl;
    }

    return 0;
}