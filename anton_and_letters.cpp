#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int t, m, n, o, p;

    string str;

    getline(cin, str);

    int a[26] = {0};

    int i = 1;
    while(str[i] != '}'){
        if(str[i] != ' ' || str[i] != ','){
            a[str[i]-'a']++;
        }

        i++;
    }

    int sum = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(a[i] > 0){
            sum++;
        }
    }

    cout<<sum<<endl;

    return 0;
}