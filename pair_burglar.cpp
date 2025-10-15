//~imran~

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, x, y, sum = 0;
    cin >> n >> m;

    vector<pair<long long, long long>> v;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        v.push_back({x, y}); 
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    for (int i = 0; i < m && n > 0; i++) {
        long long take = min(n, v[i].first); 
        sum += take * v[i].second;
        n -= take;
    }

    cout << sum;

    return 0;
}
