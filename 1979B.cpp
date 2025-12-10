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
        ll x, y;
        cin >> x >> y;
        deque<ll> v, p; // first time using deque .
        if (x == 0)
            v.push_front(0);
        if (y == 0)
            p.push_front(0);

        while (x != 0)
        {
            v.push_back(x % 2);
            x /= 2;
        }
        while (y != 0)
        {
            p.push_back(y % 2);
            y /= 2;
        }
        ll mn = max(v.size(), p.size());
        while (v.size() < mn)
            v.push_back(0);

        while (p.size() < mn)
            p.push_back(0);

                ll cnt = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] != p[i])
                break;
            cnt++;
        }
        cout << (1LL << cnt) << "\n"; // is the alternative of pow(2,cnt).
    }
    return 0;
}