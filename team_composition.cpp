#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll t, m, n, o, p, q, r;
    cin>>t;

    while(t--){
        cin>>m>>n;

        ll minimum = min(m, n);
        o = (m+n)/4;

        cout<<min(o, minimum)<<endl;
    }

    return 0;
}