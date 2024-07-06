#include <bits/stdc++.h>
using ll = long long;
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
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

        int f = 1;
        f(i, m){
            cin>>a[i];

            if(a[i] != a[0]){
                f = 0;
            }
        }

        if(f){
            cout<<-1<<endl;
            continue;
        }

        int minimum = 1e9, count = 0;

        f(i, m){
            if(a[i] == a[0]){
                count++;
            }else{
                minimum = min(minimum, count);
                count = 0;
            }
        }
        if(count > 0){
            minimum = min(minimum, count);
        }

        cout<<minimum<<endl;
    }

    return 0;
}