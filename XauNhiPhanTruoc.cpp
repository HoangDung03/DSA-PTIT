#include <bits/stdc++.h>
using namespace std;

void test() {
    string s; cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i--] = '1';
    }
    if (i >= 0) s[i] = '0';
    cout << s;
}

int main() {
    int t; cin >> t;
    while (t--) {
        test();
        cout << endl;
    }
    return 0;
}
