#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x, ans;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        int num; cin >> num;
        if (num == x) ans = i;
    }
    cout << ans;
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
