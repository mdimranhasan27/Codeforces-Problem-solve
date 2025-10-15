#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int even_misplaced = 0, odd_misplaced = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        // Count misplaced numbers
        if (i % 2 == 0 && a[i] % 2 != 0) even_misplaced++; // Even index, odd number
        if (i % 2 == 1 && a[i] % 2 != 1) odd_misplaced++;  // Odd index, even number
    }

    if (even_misplaced == odd_misplaced)
        cout << even_misplaced << "\n";  // Minimum swaps needed
    else
        cout << "-1\n";  // Impossible case
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
