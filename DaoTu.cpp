#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s, sl;
    getline(cin, sl);
    stringstream ss(sl);
    stack<string> st;
    while (ss >> s) {
        st.push(s);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
