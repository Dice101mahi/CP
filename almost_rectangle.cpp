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

        char c[m][m];

        pair<int, int> a[4];

        int k = 0;
        f(i, m){
            f(j, m){
                cin>>c[i][j];

                if(c[i][j] == '*'){
                    a[k].first = i;
                    a[k].second = j;

                    k++;
                }
            }
        }

        if(a[0].first == a[1].first){
            a[2].second = a[0].second;
            a[3].second = a[1].second;

            if(a[0].first == m-1){
                a[2].first = 0;
                a[3].first = 0;
            }else{
                a[2].first = m-1;
                a[3].first = m-1;
            }
        }else if(a[0].second == a[1].second){
            a[2].first = a[0].first;
            a[3].first = a[1].first;

            if(a[0].second == m-1){
                a[2].second = 0;
                a[3].second = 0;
            }else{
                a[2].second = m-1;
                a[3].second = m-1;
            }
        }else{
            a[2].first = a[0].first;
            a[3].first = a[1].first;
            a[2].second = a[1].second;
            a[3].second = a[0].second;
        }

        c[a[2].first][a[2].second] = '*';
        c[a[3].first][a[3].second] = '*';

        f(i, m){
            f(j, m){
                cout<<c[i][j];
            }

            cout<<endl;
        }
    }

    return 0;
}