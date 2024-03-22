#include<bits/stdc++.h>

using namespace std;
int f[1500][1500], N, M, A[1005], C[1005];
int qhd(){
	int i, j;
	memset(f, 0, sizeof(f));
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			f[i][j] = f[i-1][j];
			if(j>=A[i]){
				f[i][j] = max(f[i][j], f[i-1][j-A[i]]+C[i]);
			}
			else f[i][j] = f[i-1][j];
		}
	}
	return f[N][M];
}
int main() {
	int t; cin >> t;
	while(t--){
		for(int i=1; i<=N; i++) cin >> A[i];
		for(int i=1; i<=N; i++) cin >> C[i];
		qhd();
		cout << f[N][M] << endl;
	}
	return 0;
}
 
 

