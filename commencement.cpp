#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t, m, n, o, u, v, w;

    string str;

    cin>>str;

    int a[26] = {0};

    for(int i = 0 ; i < str.size() ; i++){
        a[str[i]-'a']++;
    }

    int sum = str.size(), track;

    for(int i = 1 ; ; i++){
        track = 0;

        for(int j = 0 ; j < 26 ; j++){
            if(a[j] == i){
                sum -= a[j];
                track++;
            }
        }

        if(track != 0 && track != 2){
            cout<<"No"<<endl;
            return 0;
        }

        if(sum == 0){
            break;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}
