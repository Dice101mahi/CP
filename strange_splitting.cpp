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

        int f = 1;
        f(i, m){
            cin>>a[i];
        }

        if(a[0]-a[m-1] == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;

            if(a[0]-a[m-2] != 0){
                f(i, m-1){
                    cout<<"R";
                }
                cout<<'B'<<endl;
            }else{
                cout<<'B';
                f(i, m-1){
                    cout<<"R";
                }
                cout<<endl;             
            }
        }
    }

    return 0;
}