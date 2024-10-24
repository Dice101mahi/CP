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

int l_bound(vl &v, int target){
    ll l = 0, h = v.size(), mid;

    while(l < h){
        mid = l+(h-l)/2;

        if(v[mid] <= target){
            l = mid+1;
        }else{
            h = mid;
        }
    }

    return l;
}

int main(){
    fast

    ll t, m, n, o, p;
    int f;

    cin>>m>>n;

    vl a(m), b(m);
    in(a, m);

    sort(a.begin(), a.end());

    b[0] = a[0];
    fn(i, 1, m){
        b[i] = a[i]+b[i-1];
    }

    if(b[l_bound(b, n)] == n) cout<<l_bound(b, n)+1<<endl;
    else cout<<l_bound(b, n)<<endl;

    return 0;
}