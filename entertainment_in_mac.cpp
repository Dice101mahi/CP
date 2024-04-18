#include <bits/stdc++.h>
using ll = long long;
using namespace std;

string reverse_str(string str){
    int l = 0, h = str.size()-1;

    while(l < h){
        swap(str[l], str[h]);
        l++;
        h--;
    }

    return str;
}

int main(){
    int t, m, n, o, p;

    cin>>t;

    while(t--){
        cin>>m;
        string str, str2;

        cin>>str;

        str2 = reverse_str(str);
        str2.append(str);

        //cout<<str<<" "<<str2<<endl;

        int f = 1;
        for(int i = 0 ; i < m ; i++){
            if(str[i] > str2[i]){
                f = 0;
                break;
            }else if(str[i] < str2[i]){
                break;
            }
        }

        if(f){
            cout<<str<<endl;
        }else{
            cout<<str2<<endl;
        }
    }

    return 0;
}