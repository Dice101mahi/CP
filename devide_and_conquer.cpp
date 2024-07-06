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

        int a[m], cnt[m];
        ll sum = 0;

        f(i, m){
            cin>>a[i];
            sum += a[i];

            int count = 0;
            o = a[i]%2;

            while(a[i]%2 == o){
                a[i] /= 2;
                count++;
            }

            cnt[i] = count;
        }

        if(sum & 1){
            cout<<*min_element(cnt, cnt+m)<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}