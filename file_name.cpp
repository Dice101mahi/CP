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

    string str;

    cin>>m>>str;

    int count = 0, sum = 0;
    f(i, m){
        if(str[i] == 'x'){
            count++;
        }else{
            if(count > 2){
                sum += count-2;
            }
            count = 0;
        }
    }
    
    if(count > 2) sum += count-2;

    cout<<sum<<endl;

    return 0;
}