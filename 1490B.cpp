//learn something new .
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> c(3, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            c[x % 3]++;
        }

        int target = n / 3;
        int moves = 0;

        while (c[0] != target || c[1] != target || c[2] != target) {
            for (int i = 0; i < 3; i++) {
                if (c[i] > target) {
                    c[i]--;
                    c[(i + 1) % 3]++;
                    moves++;
                }
            }
        }

        cout << moves << "\n";
    }

    return 0;
}
