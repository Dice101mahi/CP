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

    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n>>o;

        cout<<min((abs(m-m)+abs(n-m)+abs(o-m)), min(abs(m-n)+abs(n-n)+abs(o-n), (abs(m-o)+abs(n-o)+abs(o-o))))<<endl;
    }

    return 0;
}