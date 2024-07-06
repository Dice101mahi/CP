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
        cin>>m>>n>>o;

        int a = n, b = n;

        string str;
        cin>>str;

        if(m == n){
            cout<<"YES"<<endl;
            continue;
        }

        int yes = 0, maybe = 0, cnt = 0;
        f(i, o){
            if(str[i] == '+'){
                if(cnt == 0){
                    a++;
                }else{
                    cnt--;
                }
                b++;

                if(a == m){
                    yes = 1;
                    break;
                }
                if(b >= m){
                    maybe = 1;
                }
            }else{
                cnt++;
            }
        }

        if(yes){
            cout<<"YES"<<endl;
        }else if(maybe){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}