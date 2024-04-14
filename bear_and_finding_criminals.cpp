#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>m>>n;

    int a[m];

    for(int i = 0 ; i < m ; i++){
        cin>>a[i];
    }

    int sum = 0;

    if(a[n-1] == 1){
        sum++;
    }

    int i = n-2, j = n;

    while(i >= 0 || j < m){
        if(i >= 0 && j < m){
            if(a[i] == 1 && a[j] == 1){
                sum += 2;
            }
        }else if(i >= 0){
            if(a[i] == 1){
                sum++;
            }
        }else{
            if(a[j] == 1){
                sum++;
            }
        }

        i--;
        j++;
    }

    cout<<sum<<endl;

    return 0;
}