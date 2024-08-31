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

        int a[m][n], b[m][n];

        f(i, m){
            string str;
            cin>>str;
            f(j, n){
                a[i][j] = str[j]-'0';
            }
        }

        f(i, m){
            string str;
            cin>>str;
            f(j, n){
                b[i][j] = str[j]-'0';
            }
        }

        f(i, m-1){
            f(j, n-1){
                if(a[i][j] == 0){
                    if(b[i][j] == 1){
                        a[i][j] += 1;
                        a[i+1][j+1] = (a[i+1][j+1]+1)%3;
                        a[i][j+1] = (a[i][j+1]+2)%3;
                        a[i+1][j] = (a[i+1][j]+2)%3;
                    }else if(b[i][j] == 2){
                        a[i][j] += 2;
                        a[i+1][j+1] = (a[i+1][j+1]+2)%3;
                        a[i][j+1] = (a[i][j+1]+1)%3;
                        a[i+1][j] = (a[i+1][j]+1)%3;
                    }
                }else if(a[i][j] == 1){
                    if(b[i][j] == 0){
                        a[i][j] += 2;
                        a[i+1][j+1] = (a[i+1][j+1]+2)%3;
                        a[i][j+1] = (a[i][j+1]+1)%3;
                        a[i+1][j] = (a[i+1][j]+1)%3;
                    }else if(b[i][j] == 2){
                        a[i][j] += 1;
                        a[i+1][j+1] = (a[i+1][j+1]+1)%3;
                        a[i][j+1] = (a[i][j+1]+2)%3;
                        a[i+1][j] = (a[i+1][j]+2)%3;
                    }
                }else if(a[i][j] == 2){
                    if(b[i][j] == 0){
                        a[i][j] += 1;
                        a[i+1][j+1] = (a[i+1][j+1]+1)%3;
                        a[i][j+1] = (a[i][j+1]+2)%3;
                        a[i+1][j] = (a[i+1][j]+2)%3;
                    }else if(b[i][j] == 1){
                        a[i][j] += 2;
                        a[i+1][j+1] = (a[i+1][j+1]+2)%3;
                        a[i][j+1] = (a[i][j+1]+1)%3;
                        a[i+1][j] = (a[i+1][j]+1)%3;
                    }
                }
        }

        int f = 1;
        f(i, m){
            if(a[i][n-1] != b[i][n-1]){
                f = 0;
                break;
            }
        }

        if(f){
            f(i, n){
                if(a[m-1][i] != b[m-1][i]){
                    f = 0;
                    break;
                }
            }
        }

        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}