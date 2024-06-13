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
        cin>>m>>n;

        char c[m][n];
        ll a[4] = {m, -1, n, -1};
        int f =1;

        f(i, m){
            f(j, n){
                cin>>c[i][j];
            }
        }

        f(i, m){
            f(j, n){
                if(c[i][j] == '#'){
                    if(i < a[0]) a[0] = i;
                    if(i > a[1]) a[1] = i;
                    if(j < a[2]) a[2] = j;
                    if(j > a[3]) a[3] = j;
                }
            }
        }

        cout<<(a[0]+a[1])/2+1<<" "<<(a[2]+a[3])/2+1<<endl;
    }

    return 0;
}