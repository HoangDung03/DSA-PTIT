#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		string s; int k;
		cin >> s >> k;
		set<int> r;
		int n= s.length();
		int a[k] = {0};
		for(int i=0; i<n-k; i++){
			for(int j=0; j<k; j++){
				a[j] = s[i+j]-'0';
			}
			int l = 0;
			for(int j=0; j<k; j++){
				l = l*10 + a[j];
			}
			r.insert(l);
			cout << k << endl;
		}
	}
	return 0;
}
 
 

