#include<bits/stdc++.h>

using namespace std;

bool Cayy(char c){
	return(c == '+' or c == '-' or c == '*' or c == '/');	
}

void test(){
	string s; cin >> s;
	stack<string> st;
	for(char i : s) {
		string z = "";
		if(Cayy(i)){
			string y = st.top(); st.pop();
			string x = st.top(); st.pop();
			z = x + i + y;
		}else{
			z += i;
		}
		st.push(z);
		
	}
	cout << st.top();
}

int main() {
	int t; cin >> t;
	while(t--){
		test();
		cout << endl;
	}
	return 0;
}
 
 

