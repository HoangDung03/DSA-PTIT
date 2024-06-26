#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;

void solve() {
    vector<string> x;
    for (int i = 1; i <= k; ++i) {
        x.push_back(temp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

int main() {
    cin >> n >> k;
    set<string> se;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        se.insert(s);
    }
    temp.push_back("");
    for (auto i : se) {
        temp.push_back(i);
    }
    n = se.size();
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (string j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
