#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long unsigned
#define ld long double
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
        int a[3][2];

        f(i, 3){
            cin>>a[i][0]>>a[i][1];
        }

        if((abs(a[1][0]-a[2][0]) == 3 && abs(a[1][1]-a[2][1]) == 3)||
            (abs(a[1][0]-a[2][0]) == 2 && abs(a[1][1]-a[2][1]) == 0)||
            (abs(a[1][0]-a[2][0]) == 0 && abs(a[1][1]-a[2][1]) == 2)||
            (abs(a[1][0]-a[2][0]) == 4 && abs(a[1][1]-a[2][1]) == 0)||
            (abs(a[1][0]-a[2][0]) == 0 && abs(a[1][1]-a[2][1]) == 4)){
                cout<<2<<endl;
        }else if((abs(a[1][0]-a[2][0]) == 2 && abs(a[1][1]-a[2][1]) == 4)||
                    (abs(a[1][0]-a[2][0]) == 4 && abs(a[1][1]-a[2][1]) == 2)){
                cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}