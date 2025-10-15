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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> v;
        bool valid = true;

        v.insert(a[0]); 
        for (int i = 1; i < n; i++) {
            int s = a[i];
            if (v.find(s - 1) == v.end() &&
               v.find(s + 1) == v.end()) {
                valid = false;
                break;
            }
        v.insert(s);
        }

        cout << (valid ? "YES" : "NO") << "\n";
    }
    return 0;
}
