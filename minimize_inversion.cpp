#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        pair<int,int> ab[m];
        for(int i = 0 ; i < m ; i++){
            cin>>ab[i].first;
        }
        for(int i = 0 ; i < m ; i++){
            cin>>ab[i].second;
        }

        sort(ab, ab+m);

        for(int i = 0 ; i < m ; i++){
            cout << ab[i].first << ' ';
        }
        cout<<endl;
        for(int i = 0 ; i < m ; i++){
            cout<<ab[i].second<<' ';
        }
        cout<<endl;
    }

    return 0;
}