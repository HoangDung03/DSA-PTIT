#include<bits/stdc++.h>

using namespace std;

const int MOD = 123456789;

long long poww(long long n, long long k){
	if(k==0) return 1;
	long long x = poww(n, k/2);
	if(k%2 == 0) return (x*x)%MOD;
	return (n*((x*x)%MOD))%MOD;
}

void TestCase(){
	long long n; cin >> n;
	cout << poww(2, n-1);
}

int main() {
	int t=1; cin >> t;
	while(t--){
		TestCase();
		cout << "\n";
	}
	return 0;
}
 
 

