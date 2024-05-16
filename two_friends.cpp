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

        int a[m];

        f(i, m){
            cin>>a[i];
        }

        int f = 1;

        f(i, m){
            if(a[a[i]-1] == i+1){
                cout<<2<<endl;
                f = 0;
                break;
            }
        }

        if(f){
            cout<<3<<endl;
        }
    }

    return 0;
}