#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int trailing_zero_count(ll m){
    int base = 5, count = 0;

    while(base <= m){
        count += m/base;
        base *= 5;
    }

    return count;
}


ll find_n(int m){
    ll l = 0, h = LLONG_MAX, mid;

    while(l < h){
        mid = l+((h-l)/2);
        if(trailing_zero_count(mid) < m){
            l = mid+1;
        }else{
            h = mid;
        }
    }

    return l;
}

int main(){
    ll t, m, n, o;

    cin>>t;

    for(int i = 1 ; i <= t ; i++){
        cin>>m;

        if(m == trailing_zero_count(find_n(m))){
            cout<<"Case "<<i<<": "<<find_n(m)<<endl;
        }else{
            cout<<"Case "<<i<<": impossible"<<endl;
        }
    }

    return 0;
}