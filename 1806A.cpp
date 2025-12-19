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
        ll a, b, c, d, x, y;
        cin >> a >> b >> c >> d;
        if (d < b)
        {
            cout << "-1\n";
            continue;
        }
        y = d - b;
        x = a + y;

        if (x < c)
        {
            cout << "-1\n";
            continue;

        }
        x = x - c;

        cout << x + y << "\n";
    }
    return 0;
    
}
