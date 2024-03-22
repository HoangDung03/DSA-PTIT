#include<bits/stdc++.h>


using namespace std;

//vi tri dau tien cua mot ptu trong mang da sap xep

int Test(int a[], int n, int x){
	int res = -1;
	int l=0; int r=n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			r= m-1;
		}
		else if(a[m]<x){
			l = m+1;
		}
		else r = m-1;
	}
	return res;
}

int tEst(int a[], int n, int x){
	int res = -1;
	int l=0; int r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			l= m+1;
		}
		else if(a[m]<x){
			l = m+1;
		}
		else r = m-1;
	}
	return res;
}

int test_1(int a[], int n, int x){
	int res = -1;
	int l = 0; int r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			r = m-1;
		}
		else if(a[m]<x){
			res = m;
			r = m-1;
		}
		else r = m-1;
	}
	return res;
}

int test_2(int a[], int n, int x){
	int res = -1
	int l = 0, r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			l = m+1;
		}
		else if(a[m]<x){
			l = m+1
		}
		else {
			res = m;
			l = m+1;
		}
	}
	return res;
}

int main() {
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	cout << test_1(a,n,x) << endl;
	return 0;
}
 
 

