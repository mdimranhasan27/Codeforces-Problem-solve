#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> p(n);
        iota(p.begin(), p.end(), 1); // Fill with 1 to n

        for (int i = n - 1; i >= 0; --i) { // Reverse pairwise swap
            if (i > 0) {
                swap(p[i], p[i - 1]);
                --i; 
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
