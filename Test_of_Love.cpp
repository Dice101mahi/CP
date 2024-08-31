#include <bits/stdc++.h>
using ll = long long;
#define  in(a,m)  for(int i = 0 ; i < m ; i++) cin>>a[i];
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
        cin>>m>>n>>o;

        string str;
        cin>>str;

        m++;
        str = 'L'+str;

        p = 0;
        int i = 0;
        while(i < str.size() && p <= o){
            if(str[i] == 'C'){
                p = 10e9;
                break;
            }else if(str[i] == 'W'){
                i++;
                p++;
            }else{
                if(i+n >= str.size()){
                    i += n;
                    break;
                }

                int W = -1, L = -1;
                for(int j = i+n ; j > i ; j--){
                    if(str[j] == 'W' && W == -1){
                        W = j;
                    }

                    if(str[j] == 'L'){
                        i = j;
                        L = 1;
                        break;
                    }
                }

                if(W == -1 && L == -1){
                    p = 10e9;
                }else if(L == -1){
                    i = W;
                }
            }
        }

        if(p <= o){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}