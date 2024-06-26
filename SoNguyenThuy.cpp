#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	string t = s;
	reverse(t.begin(), t.end());
	return s+t;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("");
		while(!q.empty()){
			string s = q.front();
			q.pop();
			if(s!=""){
				cout << solve(s) << " ";
				n--;
				if(n==0) break;
			}
			q.push(s+"4");
			q.push(s+"5");
		}
		cout << endl;
	}
	return 0;
}
 
 

