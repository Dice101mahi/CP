#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int cust_lower_bound(vector<int> &a, int x){
    int low = 0, high = a.size(), mid;

    while(low < high){
        mid = low+(high-low)/2;

        if(a[mid] < x){
            low = mid+1;
        }else{
            high = mid;
        }
    }

    return low;
}

int cust_upper_bound(vector<int> &a, int x){
    return cust_lower_bound(a, x+1);
}

int main() {
    ll t, m, n, o, p, q, r;
    cin>>t;

    for(int k = 1; k <= t; k++) {
        cin>>m>>n;

        vector<int> a(m);

        for (int j = 0; j < m; j++){
            cin>>a[j];
        }
        
        cout<<"Case "<<k<< ": " <<endl;
        
        while(n--){
            cin>>o>>p;

            cout<<cust_upper_bound(a, p)-cust_lower_bound(a, o)<<endl;
        }
    }

    return 0;
}