#include<bits/stdc++.h>

using namespace std;

void TestCase(){
	string s; cin >> s;
	for(int i=s.length()-1; i>=0; --i){
		if(s[i] == '1') s[i] = '0';
		else {
			s[i] = '1';
			break;
		}
	}
	cout << s;
}

int main() {
	int t=1; cin >> t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

