#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
vector<bool> vs;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            b[i] = a[j];
            vs[j] = true;
            if (i == n - 1) cout << b << " ";
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

int main() {
	int t; cin >> t;
    while (t--) {
        cin >> a;
    	sort(a.begin(), a.end());
    	n = a.length();
    	b.resize(n);
    	vs.resize(n, false);
   	 	Try(0);
        cout << endl;
    }
    return 0;
}
