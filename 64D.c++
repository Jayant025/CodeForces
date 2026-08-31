#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> v;

    for (int i = 0; i < 3; i++) {
        v.push_back({a[i], i});
    }

    sort(v.begin(), v.end());

    int ans[3];

    // smallest -> youngest (3)
    ans[v[0].second] = 3;

    // middle -> second sister (2)
    ans[v[1].second] = 2;

    // largest -> eldest (1)
    ans[v[2].second] = 1;

    for (int i = 0; i < 3; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}