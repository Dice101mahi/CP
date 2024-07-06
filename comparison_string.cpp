#include <bits/stdc++.h>
using ll = long long;
#define fn(i, n, m) for(int (i) = (n) ; (i) < (m) ; (i)++)
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

        string str;
        cin>>str;

        int count = 1, seq = 0;

        fn(i, 1, str.size()){
            if(str[i] == str[i-1]){
                count++;
            }else{
                seq = max(seq, count);
                count = 1;
            }
        }
        seq = max(seq, count);

        cout<<seq+1<<endl;
    }

    return 0;
}