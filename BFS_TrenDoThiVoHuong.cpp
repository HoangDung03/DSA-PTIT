#include<bits/stdc++.h>

using namespace std;
int u, x;
vector<int> List[1005];
int daxet[1005];
void BFS(int u){
	queue<int> q;
	q.push(u); 
	daxet[u] = 1;
	while(!q.empty()){
		int x = q.front(); q.pop();
		cout << x << " ";
		for(int i : List[x]){
			if(!daxet[i]){
				daxet[i] = 1;
				q.push(i);
			}
		}
	}
	cout << endl; 
}

int main() {
	int t, u, x , y, i;
	cin >> t;
	while(t--){
		memset(daxet, true, sizeof(daxet));
		for(i=0; i<1005; i++) List[i].clear();
		cin >> n >> m >> u;
		for(i=1; i<=m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(u); cout << endl;
	}
	return 0;
}
 
 

