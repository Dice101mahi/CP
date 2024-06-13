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

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
}

int main(){
    init_code();

    ll t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m>>n;

        map<int, int> a; 

        f(i, m){
            cin>>o;

            if(a.find(o) == a.end()){
                a[o] = 1;
            }else{
                a[o]++;
            }
        }

        if(m < n){
            cout<<m<<endl;
            continue;
        }

        vector<pair<int, int>> b;

        for(auto& it : a){
            b.push_back(it);
        }

        sort(b.begin(), b.end(), cmp);
    
        int sum = 0;

        f(i, b.size()){
            if(b[i]. second >= n){
                if(i == b.size()-1){
                    sum = n-1;
                }else{
                    b[i+1].second += n-1;
                }
            }else{
                sum += b[i].second;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}