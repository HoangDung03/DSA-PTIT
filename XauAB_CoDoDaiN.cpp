#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void Try(int i) {
    for (char j = 'A'; j <= 'B'; ++j) {
        s[i] = j;
        if (i == n - 1) cout << s << " ";
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
