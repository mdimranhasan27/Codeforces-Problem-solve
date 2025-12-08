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
        if (x < k || y < k)
        {
            cout << 0 << " " << 0 << " " << x << " " << y << "\n";
            cout << 0 << " " << y << " " << x << " " << 0 << "\n";
        }
        else
        {
            cout << x - k << " " << y << " " << x << " " << y << "\n";
            cout << x << " " << y << " " << x << " " << y - k << "\n";
        }
    }
    return 0;
}