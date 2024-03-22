#include <bits/stdc++.h>
using namespace std;

void ThapHaNoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    ThapHaNoi(n - 1, a, c, b);
    ThapHaNoi(1, a, b, c);
    ThapHaNoi(n - 1, b, a, c);
}

int main() {
    int n; cin >> n;
    ThapHaNoi(n, 'A', 'B', 'C');
    cout << endl;
    return 0;
}
