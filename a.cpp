//~imran~
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a, mx = 0, cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> a;

            if (a < mx) 
                cnt++;
            else 
                mx = a;
        }

        cout << cnt << "\n";
    }

    return 0;
}