#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t, m, n, o, u, v, w;

    string str1, str2;

    cin>>str1>>str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);

    int j = 0, f = 1;

    for(int i = 0 ; i < 3 ; i++){
        if(i == 2){
            if(str2[i] == 'X'){
                break;
            }
        }
        for( ; j < str1.size() ; j++){
            if(str1[j] == str2[i]){
                str2[i] = 'X';
                break;
            }
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        if(str2[i] != 'X'){
            f = 0;
        }
    }

    if(f){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
