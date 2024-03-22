#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, m, k, x;
    	cin >> n >> m >> k;
    	vector<int> a;
    	for (int i = 0; i < n + m; ++i) {
        	cin >> x;
        	a.push_back(x);
    	}
    	sort(a.begin(), a.end());
    	cout << a[k - 1];
    	cout << endl;
	}
    return 0;
}

 
 

