#include<bits/stdc++.h>

using namespace std;

const int f[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };

void TestCase(){
	int n; cin >> n;
	int ans = 0;
	for(int i=9; i>=0; --i){
		ans += n/f[i];
		n %= f[i];
	}
	cout << ans;
}

int main() {
	int t; cin >> t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

