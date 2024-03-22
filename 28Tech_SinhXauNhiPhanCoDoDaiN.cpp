#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok;

//tao buoc khoi tao va ccho a[i]=0 vi xau nhi phan bat dau tu bit 0: 0000
void KTao(){
	 for(int i=1; i<=n; i++){
	 	a[i] = 0;
	 }
}

void Sinh(){
	int i = n;
	while(i>=1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i==0){
		ok = 0;
	}
	else{
		a[i] = 1;
	}
}

//bool check(){
//	int cnt = 0;
//	for(int i=0; i<=n; i++){
//		cnt += a[i];
//	}
//	return cnt == k;
//}

int main() {
	cin >> n ;//>> k;
	ok = 1;
	KTao();
	while(ok){
//		if(check()){
			for(int i=1; i<=n; i++){
				cout << a[i];
//			}
//			cout << "\n";
		}
		cout << endl; 
		Sinh();
	}
	return 0;
}
 
 

