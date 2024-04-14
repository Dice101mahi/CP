#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        vector<int> v1, v2;

        for(int i = 0 ; i < m ; i++){
            cin>>n;

            if(n%2 == 0){
                v1.push_back(n);
            }else{
                v2.push_back(n);
            }
        }

        for(int i = 0 ; i < v1.size() ; i++){
            cout<<v1[i]<<" ";
        }

        for(int i = 0 ; i < v2.size() ; i++){
            cout<<v2[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}