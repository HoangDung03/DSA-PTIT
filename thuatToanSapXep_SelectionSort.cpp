#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_pos=i;
		for(int j=i+1; j<n; j++){
			if(a[min_pos] > a[min_pos+1]){
				swap(a[min_pos], a[min_pos+1]);
			}
		}
	}
}

int main() {
	int n, a[n];
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	SelectionSort(a,n);
	for(int i =0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
 
 

