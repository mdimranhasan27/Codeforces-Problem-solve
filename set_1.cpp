//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<int> s; // allows duplicates if needed
        for (int i = 0; i < n*m; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        // Find the median
        auto it = s.begin();
        advance(it, s.size() / 2); // move iterator to median position

        int median = *it;
        cout<<median<<endl;
        long long sum = 0;
        for (int x : s) {
            sum += abs(x - median);
        }
        cout << sum << "\n";
    }
    return 0;
}
