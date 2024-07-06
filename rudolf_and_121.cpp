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
            if(a[i] < 0){
                f = 0;
                break;
            }

            if(i < m-2){
                a[i+1] -= 2*a[i];
                a[i+2] -= a[i];
                a[i] = 0;
            }
        }

        if(a[m-1] > 0 || a[m-2] > 0){
            f = 0;
        }
        
        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}