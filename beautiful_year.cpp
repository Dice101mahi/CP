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

    cin>>m;
    m++;

    int a[4];

    while(true){
        a[0] = m/1000;
        a[1] = (m/100)%10;
        a[2] = (m/10)%10;
        a[3] = m%10;

        if(!(a[0] == a[1] || a[0] == a[2] || a[0] == a[3] ||
         a[1] == a[2] || a[1] == a[3] || 
         a[2] == a[3])){
            break;
        }

        m++;
    }

    cout<<m<<endl;

    return 0;
}