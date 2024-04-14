#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll t, m, n, o, p, q, r;
    
    cin>>m>>n>>o>>p>>q;

    int a[q] = {0};
    int b[4] = {m, n, o, p};

    t = 4;
    ll sum = 0;

    for(int i = 0 ; i < 4 ; i++){
        for(int j = b[i] ; j <= q ; j += b[i]){
            if(a[j-1] == 0){
                sum++;
                a[j-1] = 1;
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}