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

       ll a[m], b[m];

       f(i, m){
            cin>>a[i];
            
            if(i == 0){
                b[0] = a[0];
                continue;
            }else b[i] = a[i]+b[i-1];
       }

       int count = 0, max = a[0];

       f(i, m){
            if(i == 0 && a[0] == 0){
                count++;
                continue;
            }

            if(a[i] > max){
                max = a[i];
            }

            if(max == b[i]-max){
                count++;
            }
       }

       cout<<count<<endl;
    }

    return 0;
}