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
        cin>>m;

        string str;

        cin>>str;

        set<char> st;

        f(i, m){
            st.insert(str[i]);
        }

        int size = st.size();

        pair<char, char> p[size];

        int i = 0;
        for(auto it : st){
            p[i].first = it;
            i++;
        }

        for(int i = 0, j = size-1 ; i < size ; i++, j--){
            p[i].second  = p[j].first;
        }
        
        string ans;

        f(i, m){
            f(j, size){
                if(p[j].first == str[i]){
                    ans += p[j].second;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}