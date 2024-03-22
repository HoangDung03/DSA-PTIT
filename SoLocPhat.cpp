#include<bits/stdc++.h>
#include<vector>
using namespace std;

void Test(){
	int n; cin >> n;
	vector<string> v;
	queue<string> q;
	q.push("");
	while(!q.empty()){
		string s = q.front();
		q.pop();
		if(s.length()==n) v.push_back(s);
		
		if(s.length()==n) continue;
		q.push(s+"6");
		q.push(s+"8");
	}
		cout << v.size() << endl;
		for(string i : v) cout << i << " ";
}

int main() {
	int t; cin >> t;
	while(t--){
		Test();
		cout << endl;
	}
	return 0;
}
 
 

