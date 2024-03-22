#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; getline(cin, s);
		int p = 0;
		stack<int> st;
		vector<int> res;
		for(int i=0; i<s.length(); ++i){
			if(s[i] == '('){
				p++;
				st.push(p);
				res.push_back(p);
			}
			else if(s[i]==')'){
				res.push_back(st.top());
				st.pop();
			}
		}
		for(int i : res) cout << i << " ";
		cout << endl;
	}
	return 0;
}
 
 

