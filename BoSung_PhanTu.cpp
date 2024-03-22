#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x; cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    cout << (v.back() -v.front() + 1) - v.size();
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
 
 

