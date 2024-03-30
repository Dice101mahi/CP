#include <bits/stdc++.h>
#include <time.h>
using ll = long long;
using namespace std;
mt19937 rng(0);

int trailing_zero_count(ll m){
    int base = 5, count = 0;

    while(base <= m){
        count += m/base;
        base *= 5;
    }

    return count;
}



int main(){
    ll t, m, n, o;

    for(int i = 0 ; i < 10 ; i++){
        cout<<trailing_zero_count(i+25)<<endl;
    }

    return 0;
}