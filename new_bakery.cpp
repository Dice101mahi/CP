#include <bits/stdc++.h>
using ll = long long;
#define fn(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
#define f(i, m) for(int (i) = (0) ; (i) < (m) ; (i)++)
using namespace std;


void init_code(){  
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n>>o;

        ll sum = 0;

        if(o > n){
            sum += o*(o+1)/2;
            sum -= max(n, o-m)*(max(n, o-m)+1)/2;
            sum += n*max<ll>(0, m-o+n);
        }else{
            sum += m*n;
        }

        cout<<sum<<endl;   
    }

    return 0;
}