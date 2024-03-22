#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		string s;
		stack<char> st;
		getline(cin, s);
		for(int i=0; i<s.length(); i++){
		st.push(s[i]);
		}
		while(!st.empty()){
		cout << st.top();
		st.pop();
		}
	}
	return 0;
}
 
 

