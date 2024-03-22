#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int f[10005] = {};
        vector<int> v;
        int son = n;
        while(n--)
        {
            cin >> x;
            if(!f[x])
                v.push_back(x);
            f[x] = 1;
        }
        cout << (is_sorted(v.begin(), v.end()) and v.size() == son) << endl;
    }
    return 0;
}
 
 

