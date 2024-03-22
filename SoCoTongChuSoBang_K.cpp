#include<bits/stdc++.h>

using namespace std;
int M=1e9+7, i, j; 
int f[105][50005];

void tinh(){
//	int n, q; cin >> n >> q; 
	int i, j, k;
	for(i=1; i<10; i++) f[1][i] = 1;
	
	for(i=1; i<=100; i++){
		for(j=1; j<=50000; j++){
			for(k=0; k<=9; k++)
				if(k<=j){
					f[i][j] = (f[i][j] + f[i-1][j-k])%M;
					cout << f[i][j] << endl;	
				}
				else break;
		}
	}
//		cout << f[i][j] << endl;
}

 main() {
	int t; cin >> t;
	while(t--){
	int n, k;
	cin >> n >> k; 
	tinh();
	}
	return 0;
}
 
 

