#include<bits/stdc++.h>

using namespace std;

int main() {
	int t, i, j, n, f[10002];
	cin >> t;
	f[1]=1; f[2]=2; f[3]=3;
	for(i=4; i<=10000; i++){
		f[i]=i;
		for(j=1; j<=sqrt(i); j++)
			f[i] = min(f[i], f[i-j*j] + 1);
	}
	
	while(t--){
		cin >> n;
		cout << f[n] << endl;
	}	
	return 0;
}
 
 

