#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n / 2; ++i) {
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
    if (n % 2 != 0) cout << a[n / 2];
}

int main() {
   	int t; cin >> t;
   	while(t--){
   		int n; cin >> n;
   		vector<int> a(n);
   		int i,j;
   		for(i=0; i<n; i++){
   			cin >> a[i];
		   }
		sort(a.begin(), a.end());
		for(i=0, j=a.size()-1; i<j; i++, j--)
			cout << a[j] << " " << a[i] << " ";
		if(i==j) cout << a[i];
		cout << "\n";
	   }
    return 0;
}
