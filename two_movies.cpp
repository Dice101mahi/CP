#include <bits/stdc++.h>
using ll = long long;
#define fm(i, m, n) for(int (i) = 0 ; (i) < (m) ; i += n)
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
#define f(i, m) for(int (i) = 0 ; (i) < (m) ; (i)++)
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

        int a[m], b[m];

        f(i, m){
            cin>>a[i];
        }
        f(i, m){
            cin>>b[i];
        }

        int cp = 0, cm = 0, suma = 0, sumb = 0;

        f(i, m){
            if(a[i] == 1 && b[i] == 1){
                cp++;
            }else if(a[i] == -1 && b[i] == -1){
                cm++;
            }else{
                if(a[i] == 1){
                    suma++;
                }else if(b[i] == 1){
                    sumb++;
                }
            }
        }

        while(cm > 0){
            if(suma > sumb){
                suma--;
            }else{
                sumb--;
            }

            cm--;
        }

        while(cp > 0){
            if(suma < sumb){
                suma++;
            }else{
                sumb++;
            }

            cp--;
        }

        cout<<min(suma, sumb)<<endl;
    }

    return 0;
}