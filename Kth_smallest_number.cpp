#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t, m, n, o;

	
	cin>>m>>n;

	int a[n] = {0};

	for(int i = 0 ; i < m ; i++){
		cin>>o;

		a[o-1]++;
	}

	for(int i = 0 ; i < n ; i++){
		cout<<ceil(a[i]/12.00)<<endl;
	}

	return 0;
}