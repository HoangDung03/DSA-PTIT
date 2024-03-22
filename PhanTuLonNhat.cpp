#include<bits/stdc++.h>

using namespace std;

void TestCase(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	sort(a.rbegin(), a.rend());
	a.resize(k);
	for(int i : a) cout << i << " ";	
}

int main() {
	int t=1; cin >> t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

