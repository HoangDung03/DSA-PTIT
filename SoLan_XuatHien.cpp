#include<bits/stdc++.h>

using namespace std;

void TestCase(){
	int n,x;
	cin >> n >> x;
	vector<int> dd(1e6+1, 0);
	for(int i=0; i<n; ++i){
		int num; cin >> num;
		dd[num]++;
	}
	if(dd[x]) cout << dd[x];
	else cout << -1;
}


int main() {
	int t=1; cin>>t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

