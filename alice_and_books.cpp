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
        cin>>m;

        int a[m];

        f(i, m){
            cin>>a[i];
        }

        n = *max_element(a, a+m);
    
        if(a[m-1] == n){
            cout<<*max_element(a, a+m-1)+a[m-1]<<endl;
        }else{
            cout<<n+a[m-1]<<endl;
        }

    }

    return 0;
}