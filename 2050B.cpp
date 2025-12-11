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
        ll n, sum = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
        {
            cout << "NO\n";
            continue;
        }
        ll sum_ev = 0, sum_od = 0, ev = 0, od = 0;
        for (int i = 0; i < n; i += 2)
        {
            sum_ev += v[i];
            ev++;
        }
        for (int i = 1; i < n; i += 2)
        {
            sum_od += v[i];
            od++;
        }
        if ((sum_ev / ev) == (sum_od / od))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}