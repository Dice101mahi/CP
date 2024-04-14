#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        int a[m] = {0};

        for(int i = 0 ; i < m ; i++){
            cin>>n;
            a[n-1]++;
        }

        sort(a, a+m, greater<int>());

        int cnt = 0;

        for(int i = 0 ; i < m ; i++){
            if(a[i] < 2){
                break;
            }else{
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}