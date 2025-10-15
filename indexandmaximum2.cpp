
//~imran~

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> v1; 

        while (m--) {
            char c;
            ll x, y;
            cin >> c >> x >> y;

            for (int i = 0; i < n; i++) {
                if (v[i] >= x && v[i] <= y) {
                    if (c == '+') v[i]++;
                    else v[i]--;
                }
            }
            v1.push_back(*max_element(v.begin(), v.end()));
        }
        for (int z : v1) {
            cout << z << " ";
        }
        cout << "\n";
    }

    return 0;
}
