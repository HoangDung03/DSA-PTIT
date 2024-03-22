#include<bits/stdc++.h>

using namespace std;

bool ls(int a[], int n, int x){
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i]==x) return true;
	}
	return false;
}

bool bs(int a[], int n, int x){
	int l=0; int r=n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			return true;
		}
		else if(a[m]<x){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return false;
}

bool bnr_s(int a[], int l, int r, int x){
	if(l>r)
		return false;
	int m = (l+r)/2;
	if(a[m]==x)
		return true;
	else if(a[m]<x)
		return bnr_s(a, m+1, r, x);
	else
		return bnr_s(a, l, m-1, x);
	 
}


int main() {
	int n; cin >> n;
	int x; cin >> x;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];	
	}
	if(bs(a,n,x)){
		cout << "1" << endl;
	}
	else cout << "-1"<< endl;
	return 0;
}
 
