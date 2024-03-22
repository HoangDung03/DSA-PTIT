#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.length(); ++i) {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
    }
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
