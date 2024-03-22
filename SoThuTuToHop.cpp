#include <bits/stdc++.h>
using namespace std;

int n, k, res;
int a[20], temp[20];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= k; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}	

int main() {
    int t; cin >> t;
    while (t--) {
        res = 0; stop = false;
    	cin >> n >> k;
    	for (int i = 1; i <= k; ++i) {
        	cin >> temp[i];
    	}
    	Try(1);
    	cout << res;
    	cout << endl;
    }
    return 0;
}
