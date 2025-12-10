//~imran~

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), p;
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < 2 * n; i++) p.push_back(v[i % n]);

        for (int i = 0; i < n; i++) {
            int xor_val = p[i+1];
            for (int j = 1; j < n-1; j++) {
                xor_val ^= p[j+1];
            }
            p[i] = xor_val;
        }
        for (int i = 0; i < n; i++) {
            if (find(v.begin(), v.end(), p[i]) != v.end()) {
                cout << p[i] << "\n";
                break;
            }
        }
    }
    return 0;
}
