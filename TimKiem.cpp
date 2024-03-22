#include<bits/stdc++.h>

using namespace std;

void TestCase(){
	int n, x;
	cin >> n >> x;
	vector<bool> dd(1e6+1, false);
	for(int i=0; i<n; ++i){
		int num; cin >> num;
		dd[num] = true;
	}
	if(dd[x]) cout << 1;
	else cout << -1;
}

int main() {
	int t=1; cin >> t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

