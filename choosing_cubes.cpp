#include <bits/stdc++.h>
using ll = long long;
#define fn(i, m, n) for(int (i) = (0) ; (i) < (m) ; (i)+=(n))
#define f(i, m) for(int (i) = (0) ; (i) < (m) ; (i)++)
using namespace std;


void init_code(){  
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n>>o;

        vector<int> a;

        f(i, m){
            cin>>p;
            a.push_back(p);
        }

        if(m == o){
            cout<<"Yes"<<endl;
            continue;
        }

        p = a[n-1];

        sort(a.rbegin(), a.rend());

        if(a[o-1] < p){
            cout<<"Yes"<<endl;
        }else if(a[o-1] == p){
            if(a[o] == p){
                cout<<"Maybe"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}