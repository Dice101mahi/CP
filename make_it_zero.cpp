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

        ll sum = 0;

        f(i, m){
            cin>>a[i];
        }

        if(m%2 == 0){
            cout<<2<<endl;
            cout<<1<<" "<<m<<endl<<1<<" "<<m<<endl;
        }else{
            cout<<4<<endl;
            cout<<1<<" "<<m-1<<endl<<1<<" "<<m-1<<endl;
            cout<<m-1<<" "<<m<<endl<<m-1<<" "<<m<<endl;
        }
    }

    return 0;
}