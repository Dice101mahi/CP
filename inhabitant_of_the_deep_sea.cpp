#include <bits/stdc++.h>
using ll = long long;
#define  in(a, m)  for(int i = 0 ; i < m ; i++) cin>>a[i]
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
        cin>>m>>n;

        ll a[m];
        in(a, m);

        ll sumf[m+1] = {0}, sumb[m+1] = {0};
        fn(i, 1, m+1){
            sumf[i] = sumf[i-1]+a[i-1];
        }

        for(int i = m ; i >= 0 ; i--){
            sumb[m+1-i] += sumb[m-i]+a[i-1];
        }

        if(sumf[m] <= n){
            cout<<m<<endl;
            continue;
        }

        int carry = 0;
        if(n%2 == 1){
            carry = 1;
        }

        ll count = 0;
        fn(i, 1, m+1){
            if(sumf[i] > n/2+carry){
                break;
            }else{
                count++;
            }
        }

        fn(i, 1, m+1){
            if(sumb[i] > n/2){
                break;
            }else{
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}