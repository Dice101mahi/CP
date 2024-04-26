#include <bits/stdc++.h>
using ll = long long;
#define f(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
using namespace std;

void init_code(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();

    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n;

        if(n > 1){
            if(m != n){
                cout<<-1<<endl;
            }else{
                f(i, m, 1){
                    cout<<1<<" ";
                }

                cout<<endl;
            }
        }else{
            f(i, m, 1){
                cout<<i+1<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}