#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    string temp = x;

    // Try up to 6 times to make s a substring of x
    for (int i = 0; i < 6; ++i) {
        if (temp.find(s) != string::npos) {
            cout << i << "\n";
            return;
        }
        temp += temp; // Double the string
    }

    cout << -1 << "\n"; // Not found after 6 repetitions
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
