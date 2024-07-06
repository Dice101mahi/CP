#include <bits/stdc++.h>
using ll = long long;
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
        cin>>m>>n;

        ll a[m];

        f(i, m){
            cin>>a[i];
        }
        sort(a, a+m);

        ll cum[m+1] = {0};

        f(i, m+1){
            cum[i+1] = cum[i]+a[i];
        }

        ll maxi = 0;
        f(i, n+1){
            maxi = max<ll>(maxi, cum[m-i]-cum[2*(n-i)]);
        }

        cout<<maxi<<endl;
    }

    return 0;
}