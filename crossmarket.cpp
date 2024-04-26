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

        if(m == 1 && n == 1){
            cout<<0<<endl;
            continue;
        }
        
        if(m >= n){
            cout<<m+n+n-2<<endl;
        }else{
            cout<<n+m+m-2<<endl;
        }
    }

    return 0;
}