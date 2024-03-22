#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;
bool G;

void Tinh() {
    int sum = 0;
    for (int i = 0; i < b.size(); ++i) {
        sum += a[b[i]];
    }
    if (sum == k) {
        G = true;
        cout << "[";
        for (int i = 0; i < b.size(); ++i) {
            cout << a[b[i]];
            if (i != b.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}

void Try(int i) {
    for (int j = 1; j >= 0; --j) {
        if (j == 1) b.push_back(i);
        if (i == n - 1) Tinh();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

int main() {
	int t; cin >> t;
    while (t--) {
        cin >> n >> k;
    	a.resize(n);
    	G = false;
    	for (int &i : a) cin >> i;
    	sort(a.begin(), a.end());
    	Try(0);
    	if (!G) cout << -1;
    	cout << endl;
    }
    return 0;
}
