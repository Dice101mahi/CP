#include <bits/stdc++.h>
using ll = long long int;
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

    pair<ll, ll > a, b;

    cin>>a.first>>a.second>>b.first>>b.second;

    int f = 1;
    if(a.first == b.first){
        if(b.second%2 == 1 && a.second == b.second-1){
            cout<<0<<endl;
            f = 0;
        }else if(b.second%2 == 0 && a.second == b.second+1){
            cout<<0<<endl;
            f = 0;
        }
    }

    if(f){
        if((b.first+b.second)%2 == 0){
            if(a.first > b.first){
                b.first++;
            }
        }else if((b.first+b.second)%2 == 1){
            if(a.first < b.first){
                b.first--;
            }
        }

        ll sum = abs(b.second-a.second);

        if(abs(b.second-a.second) >= abs(b.first-a.first)){
            cout<<sum<<endl;
        }else{
            o = abs(b.first-a.first)-abs(b.second-a.second);
            sum += ceil(o/2.0);
            cout<<sum<<endl;
        }
    }

    return 0;
}