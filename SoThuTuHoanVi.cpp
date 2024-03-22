#include <bits/stdc++.h>
using namespace std;

int n, res;
int a[10], u[10], temp[10];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= n; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = 1; j <= n; ++j) {
        if (!u[j]) {
            a[i] = j;
            u[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        res = 0; stop = false;
    	memset(u, 0, sizeof(u));
    	cin >> n;
    	for (int i = 1; i <= n; ++i) {
        	cin >> temp[i];
    	}
    		Try(1);
   	 		cout << res;	
        cout << endl;
    }
    return 0;
}
