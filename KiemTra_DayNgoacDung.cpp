#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
            st.pop();
        else if (s[i] == '}' && !st.empty() && s[st.top()] == '{')
            st.pop();
        else
            st.push(i);
    }
    cout << (st.empty() ? "YES" : "NO");
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
