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

        string str;
        cin>>str;

        int a[7] = {0};

        f(i, m){
            
            a[str[i]-'A']++;
        }

        o = 0;

        f(i, 7){
            if(a[i] < n){
                o += n-a[i];
            }
        }

        cout<<o<<endl;
    }

    return 0;
}