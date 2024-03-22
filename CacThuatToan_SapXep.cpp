#include<bits/stdc++.h>

using namespace std;

//Thuat toan sap xep chon
void SelectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_p = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min_p]){
				swap(a[j], a[min_p]);
			}
		}
	}
}

// Thuat toan sap xep noi bot
void bubbleSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

// Thuat toan sap xep chen
void insertionSort(int a[], int n){
	for(int i=0; i<n; i++){
		int x = a[i]; int pos = i-1;
		while(pos>=0 && x < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] = x;
	}
}
	
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
//		SelectionSort(a, n);
//		bubbleSort(a, n);
		insertionSort(a, n);
		for(int x : a){
			cout << x << " ";
		}
	}
	return 0;
}
 
 

