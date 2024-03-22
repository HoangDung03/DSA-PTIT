#include<bits/stdc++.h>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	vector<long long> v;
	queue<string> q;
	q.push("");
	while(true){
		string s = q.front(); q.pop();
		if(s != ""){
			v.push_back(stoll(s));
			if(s.length() == 9) break;
		}
		q.push(s + '4');
		q.push(s + '7');
	}
	while(!q.empty()){
		v.push_back(stoll(q.front()));
		q.pop();
	}
	
	int index = lower_bound(v.begin(), v.end(), a) - v.begin();
	long long res = 0;
	while(a<=b){
		long long n = min(v[index], b) -a+1;
		a = v[index] + 1;
		res += n*v[index];
		index++;
	}
	cout << res;
	cout << endl;
	return 0;
}
 
 

