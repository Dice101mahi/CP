#include <bits/stdc++.h>
using ll=long long;
using namespace std;
 
int main(){
    int t, m, n, o, p;
 
    cin>>t;
 
    while(t--){
        cin>>m>>n>>o;
 
        if(m - ((m/n) + (m%n != 0)) <= o){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
 
    return 0;
}