#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n), r(n);
    for (int &i : a) cin >> i;
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = -1;
        else r[i] = st.top();
        st.push(a[i]);
    }
    for (int i : r) cout << i << " ";
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
