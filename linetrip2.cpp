//~imran~

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> v;
        v.push_back(arr[0]);

        for (int i = 0; i < n - 1; i++) { 
            v.push_back(arr[i + 1] - arr[i]);
        }

        v.push_back(2 * (distance - arr[n - 1]));

        cout << *max_element(gaps.begin(), gaps.end()) << "\n";
    }

    return 0;
}
