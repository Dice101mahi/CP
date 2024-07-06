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
        string a, b;
        cin>>a>>b;

        int r = b.size();
        int x = r;

        f(i, b.size()){
            int c = i;
            f(j, a.size()){
                if(a[j] == b[c]) {
                    c++;
                    if (c == b.size())
                        break;
                }
            }

            r = min(r, i+x-c);
        }

        cout<<r+a.size()<<endl;
    }

    return 0;
}