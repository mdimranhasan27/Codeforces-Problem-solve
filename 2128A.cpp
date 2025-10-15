#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Step 1: Remove values > c
        vector<ll> filtered;
        int removed = 0;
        for (ll val : a) {
            if (val > c) removed++;
            else filtered.push_back(val);
        }

        // Step 2: Sort in descending order
        sort(filtered.rbegin(), filtered.rend());

        // Step 3: Assign powers and check
        int fail = 0, power = 0;
        for (ll val : filtered) {
            if (val > c / (1LL << power)) {
                // This value will exceed even at 2^power
                fail++;
            } else {
                power++; // Safe, move to next power
            }
        }

        cout << removed + fail << '\n';
    }

    return 0;
}
