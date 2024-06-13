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
        string str;
        cin>>str;

        int a[str.size()];

        f(i, str.size()){
            a[i] = str[i]-'0';
        }

        ll sum = 0, cnt = 0;
        
        f(i, str.size()){
            if(a[i] == 0 && cnt > 0){
                sum += cnt+1;
            }else if(a[i] == 1){
                cnt++;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}