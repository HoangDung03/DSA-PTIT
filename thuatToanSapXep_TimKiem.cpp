#include<bits/stdc++.h>

using namespace std;

//bool Test(int a[], int n, int x){
//	for(int i=0; i<n; i++){
//		if(a[i]==x)
//			return true;
//	}
//	return false;
//}

//bool TestCase(int a[], int n, int x){
//	int l=0, r=n-1;
//	while(l<=r){
//		int m = (l+r)/2;
//		if(a[m]==x){
//			return true;
//		}
//		else if(a[m]<x){
//			l = m+1;
//		}
//		else {
//			r = m-1;
//		}
//	}
//	return false;
//}

int main() {
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
		cin >> a[i];	
		}
//		if(Test(a, n, x))
//			cout << "1\n";
//		else
//			cout << "-1\n";
	if(binary_search(a, a+n, x)){
		cout << "1\n";	
	}
	else 
		cout << "-1\n";
	}
		return 0;
}
 
 

