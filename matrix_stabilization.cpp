#include <bits/stdc++.h>
using ll = long long;
#define fm(i, m, n) for(int (i) = 0 ; (i) < (m) ; i += n)
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
#define f(i, m) for(int (i) = 0 ; (i) < (m) ; (i)++)
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
        cin>>m>>n;

        int a[m][n];

        f(i, m){
            f(j, n){
                cin>>a[i][j];
            }
        }

        f(i, m){
            f(j, n){
                if(m == 1){
                    if(j == 0){
                        a[i][j] = min(a[i][j], a[i][j+1]);
                    }else if(j == n-1){
                        a[i][j] = min(a[i][j], a[i][j-1]);
                    }else{
                        a[i][j] = min(a[i][j], max(a[i][j+1], a[i][j-1]));
                    }

                    continue;
                }
                if(n == 1){
                    if(i == 0){
                        a[i][j] = min(a[i][j], a[i+1][j]);
                    }else if(i == m-1){
                        a[i][j] = min(a[i][j], a[i-1][j]);
                    }else{
                        a[i][j] = min(a[i][j], max(a[i+1][j], a[i-1][j]));
                    }

                    continue;
                }
                if(i == 0){
                    if(j == 0){
                        a[i][j] = min(a[i][j], max(a[i+1][j], a[i][j+1]));
                    }else if(j == n-1){
                        a[i][j] = min(a[i][j], max(a[i+1][j], a[i][j-1]));
                    }else{
                        a[i][j] = min(a[i][j], max(a[i+1][j], max(a[i][j-1], a[i][j+1])));
                    }
                }else if(i == m-1){
                    if(j == 0){
                        a[i][j] = min(a[i][j], max(a[i-1][j], a[i][j+1]));
                    }else if(j == n-1){
                        a[i][j] = min(a[i][j], max(a[i-1][j], a[i][j-1]));
                    }else{
                        a[i][j] = min(a[i][j], max(a[i-1][j], max(a[i][j-1], a[i][j+1])));
                    }
                }else if(j == 0){
                    a[i][j] = min(a[i][j], max(a[i+1][j], max(a[i-1][j], a[i][j+1])));
                }else if(j == n-1){
                    a[i][j] = min(a[i][j], max(a[i+1][j], max(a[i-1][j], a[i][j-1])));
                }else{
                    a[i][j] = min(a[i][j], max(a[i-1][j], max(a[i+1][j], max(a[i][j-1], a[i][j+1]))));
                }
            }
        }

        f(i, m){
            f(j, n){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}