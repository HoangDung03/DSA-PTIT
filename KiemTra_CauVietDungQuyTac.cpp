#include<bits/stdc++.h>

using namespace std;
void Test(){
	string s; getline(cin, s);
	stack<int> st;
	for(int i=0; i<s.length(); ++i){
		if(s[i]== '(' or s[i]=='[')
			st.push(s[i]);
		else if(s[i]==')'){
			if(!st.empty() && st.top() == '(')
				st.pop();
			else
				st.push(s[i]);	
		}else if(s[i] == ']'){
			if(!st.empty() && st.top() == '[')
				st.pop();
			else 
				st.push(s[i]);
		}
	}
	cout << (st.empty() ? "YES" : "NO");
}
int main() {
	int t; cin >> t; cin.ignore();
	while(t--){
		Test();
		cout << endl;
	}
	return 0;
}
 
 

