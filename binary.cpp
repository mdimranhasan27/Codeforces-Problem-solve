//~imran~

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n, m;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        int r = 0, c = 0;
        
        // Row-wise processing
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;  // Read one row
            int count1 = count(row.begin(), row.end(), '1');  // Count '1's in row
            if (count1 % 2) r++;  // If odd, increment row count
        }

        // Column-wise processing
        for (int j = 0; j < m; j++) {
            int count1 = 0;
            for (int i = 0; i < n; i++) {
                char ch;
                cin >> ch;  // Read each character directly for the column
                if (ch == '1') count1++;
            }
            if (count1 % 2) c++;  // If odd, increment column count
        }

        cout << max(r, c) << '\n';
    }

    return 0;
}
