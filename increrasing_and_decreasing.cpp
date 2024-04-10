#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    int t, m, n, o, u, v, w;
    int a, b, f;

    cin>>t;

    while(t--){
        int min, max, n; 
        cin>>min>>max>>n;

        int a[n];

        a[0] = min;
        a[n-1] = n;

        if(max < min+(n*(n-1)/2)){
            cout<<-1<<endl;
            continue;
        }

        for(int i = n-2, j = 1 ; i > 0 ; i--, j++){
            a[i] = a[i+1]-j;
        }

        for(int i = 0 ; i < n ; i++){
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
