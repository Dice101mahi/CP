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
        cin>>m;

        if(m == 1 || m ==2 || m == 4){
            cout<<-1<<endl;
        }else if(m%3 == 0){
            cout<<m/3<<" "<<0<<" "<<0<<endl;
        }else if(m%3 == 2){
            cout<<(m-5)/3<<" "<<1<<" "<<0<<endl;
        }else{
            cout<<(m-7)/3<<" "<<0<<" "<<1<<endl;
        }
    }

    return 0;
}