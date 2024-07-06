#include <bits/stdc++.h>
using ll = long long;
#define fn(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
#define f(i, m) for(int (i) = (0) ; (i) < (m) ; (i)++)
using namespace std;

void init_code(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;

        vector<int> v;

        while(m){
            v.push_back(m%10);

            m /= 10;
        }

        int f = 1, i = 0;

        while(i < v.size()){
            if(i == v.size()-1){
                if(v[i] != 0){
                    f = 0;
                    break;
                }else{
                    break;
                }
            }
            
            if(v[i] == 9 || v[i+1] == 0){
                f = 0;
                break;
            }

            v[i+1]--;
            i++;
        }

        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}