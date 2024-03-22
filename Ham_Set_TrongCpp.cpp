#include<bits/stdc++.h>
#include<set>
using namespace std;
//O(logN)
//insert
//size
//find
//count
//erase
// trong set<> co thu tu (Order)
// Multiset<> co the luu cac phan tu giong nhau, cu phap tuong tu set<>
// Unordered_set<> Cac ptu trong set khong con duoc sap xep theo thu tu nua


int main() {
	
	unordered_set<int> s;
	for(int i=0; i<10; i++){
		s.insert(i);
	}
	for(int x : s){
		cout << x << endl;
	}
	

//// cho mang co n ptu va so nguyen k, doi voi mot day con lien tiep co chieu k
//// in ra ptu lon nhat trong day con do
//// VD: 
//// input: 10 3
//// 1 2 3 1 4 5 1 8 9 10
//// output: 
//// 3 3 4 5 5 8 9 10	
//
//	int n, k; 
//	cin >> n >> k;
//	int a[n];
//	for(int &x : a) cin >> x;
//	multiset<int> ms;
//	for(int i=0; i<k; i++){
//		ms.insert(a[i]);
//	}
//	for(int i=k; i<n; i++){
//		cout << *ms.rbegin() << " ";
//		ms.erase(ms.find(a[i-k]));
//		ms.insert(a[i]);
//	}
//	cout << *ms.rbegin() << endl;
	
	
//	multiset<int> ms;
//	ms.insert(100);
//	ms.insert(100);
//	ms.insert(200);
//	ms.insert(200);
//	cout << ms.size() << endl;
//	for(auto x : ms){
//		cout << x << " ";
//	}
//	cout << endl;		
//	cout << ms.count(100) << endl;
//	
//	// ham erase() trong multiset<> se xoa het cac ptu giong nhau
//	ms.erase(100);
//	for(int x : ms){
//		cout << x << " ";
//	}
	
//	int n; cin >> n;
//	set<int> s;
//	for(int i=0; i<n; i++){
//		int x; cin >> x;
//		s.insert(x);
//	}
//	set<int> s;
//	for(int i=0; i<10; i++){
//		s.insert(i);
//	}
//	s.erase(5);
//	cout << s.size() << endl;
//	if(s.count(5) != 0){
//		cout << "found" << endl;
//	}
//	else cout << "Not Found" << endl;
//	for(int x : s){
//		cout << x << " ";
//	}
//	for(auto x : s){
//		cout << x << endl;
//	}
	
	return 0;
}
 
 

