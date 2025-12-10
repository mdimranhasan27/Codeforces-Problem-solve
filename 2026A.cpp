//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int mn = min(x, y);

        cout << 0 << " " << 0 << " " << mn << " " << mn << "\n";
        cout << mn << " " << 0 << " " << 0 << " " << mn << "\n";
    }
    return 0;
}
