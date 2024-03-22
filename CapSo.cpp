#include<bits/stdc++.h>

using namespace std;
struct capso{
	int dau, cuoi;
};
capso a[105]; int n, f[105];
bool cmp(capso x, capso y){
	return(x.cuoi < y.cuoi);
}
int main() {
	int t, n, i, j, kq;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0; i<n; i++) cin >> a[i].dau >> a[i].cuoi;
		sort(a, a+n, cmp);
		kq = 0;
		for(i=0; i<n; i++) f[i] = 1;
		for(i=1; i<n; i++){
			for(j=0; j<i; j++)
				if(a[j].cuoi < a[i].dau) f[i] = max(f[i], f[j]+1);
			kq = max(kq, f[i]);
		}
		cout << kq << endl;
	}
	
	return 0;
}
 
 

