#include<bits/stdc++.h>

using namespace std;
int V, E, u ,v;
vector<vector<int>> G;
vector<int> vs;

void BFS(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		u = q.front(); q.pop();
		for(int v : G[u]){
			if(!vs[v]){
				q.push(v);
				vs[v] = true;
			}
		}
	}
}

void test(){
	cin >> V >> E;
		G.assign(V+1, {});
		while(E--){
			cin >> u >> v;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		int res = 0, l = 1;
		for(int i=1; i<=V; ++i){
			int c = 0;
			vs.assign(V+1, false);
			vs[i] = true;
			for(int j=1; j<=V; ++j){
				if(!vs[j]){
					BFS(j);
					c++;
				}
			}
			if(c>l){
				l = c;
				res = i;
			}
		}
		cout << res;
}

int main() {
	int h; cin >> h;
	while(h--){
		test();
		cout << endl;
	}
	return 0;
}
 
 

