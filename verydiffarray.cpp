#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        sort(arr2.begin(), arr2.end());

        long long ans = 0;
        for (int k = 0; k < n ; k++) {
            ans += max(abs(arr1[k] - arr2[m - k - 1]),abs(arr1[k]-arr2[n-k-1]));
        }

        cout << ans << endl;
    }
    return 0;
}
