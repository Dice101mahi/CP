#include <bits/stdc++.h>
using ll = long long;
#define f(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
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

        int a[m], sum = 0, f = 0;

        f(i, m){
            cin>>a[i];
            if(a[i] < 0){
                sum++;
            }

            if(a[i] == 0){
                f = 1;
            }
        }

        if(f){
            cout<<0<<endl;
            continue;
        }

        if(sum%2 == 0){
            cout<<1<<endl<<"1 0"<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}