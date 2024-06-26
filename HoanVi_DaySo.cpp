#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b, u;
vector<vector<int>> res;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!u[j]) {
            b[i] = a[j];
            u[j] = 1;
            if (i == n - 1) res.push_back(b);
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    u.resize(n, 0);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

