//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> P = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                    31, 37, 41, 43, 47, 53, 59, 61,
                    67, 71, 73, 79, 83, 89, 97};
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll g = 0;
        for (ll i = 0; i < n; i++)
        {
            g = __gcd(g, v[i]);
        }
        for (ll i = 0; i >= 0; i++)
        {
            if (g % P[i] != 0)
            {
                cout << P[i] << "\n";
                break;
            }
        }
    }

    return 0;
}
