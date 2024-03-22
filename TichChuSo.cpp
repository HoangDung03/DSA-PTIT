#include<bits/stdc++.h>

using namespace std;

void Test(){
	long long p; cin >> p;
	if(p==1){
		cout << 1;
		return;
	}
	int d[10] = {};
	for(int i=9; i>=2; --i){
		while(p%i==0){
			p /= i;
			d[i]++;
		}
	}
	if(p!=1){
		cout << -1;
		return;
	}
	for(int i=2; i<=9; ++i){
		for(int j=1; j<=d[i]; ++j){
			cout << i;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		Test();
		cout << "\n";
	}
	return 0;
}
 
 

