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
        string str, str2;
        cin>>str;

        int f = 1;
        str2 = "";

    
        f(i, str.size()){
            if(str[i] != str[i+1] && i < str.size()-1){
                f = 0;
                str2 += str[i+1];
                str2 += str[i];
                i++;
            }else{
                str2 += str[i];
            }
        }
    

        if(f){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl<<str2<<endl;
        }
    }

    return 0;
}