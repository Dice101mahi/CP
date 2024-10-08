#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long unsigned
#define ld double
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define bp pop_back
#define pf push_front
#define fp pop_front
#define pp pop_up
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
const int MOD = 1000000007;
#define in(a, m)  for(int i = 0 ; i < m ; i++) cin>>a[i]
#define fm(i, m, n) for(int (i) = 0 ; (i) < (m) ; i += n)
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
#define f(i, m) for(int (i) = 0 ; (i) < (m) ; (i)++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main(){
    fast

    ll t, m, n, o, p;
    int f;

    cin>>t;

    while(t--){
        cin>>m>>n;

        int a[m];
        in(a, m);

        ll ans = 1;
        f = 1;
        f(i, m){
            if(i < m-1 && a[i] == a[i+1] && a[i] != 0){
                cout<<0<<endl;
                f = 0;
                break;
            }

            if((i == 0 || i == m-1) && a[i] == 0){
                ans = ((ans%MOD)*((n-1)%MOD))%MOD;
            }else if(a[i] == 0){
                if(a[i-1] != a[i+1]) ans = ((ans%MOD)*((n-2)%MOD))%MOD;
                else ans = ((ans%MOD)*((n-1)%MOD))%MOD;
            }
        }

        if(f){
            cout<<ans<<endl;
        }
    }

    return 0;
}