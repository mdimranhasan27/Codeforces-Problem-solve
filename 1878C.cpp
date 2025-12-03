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
        ll n, k, x;
        cin >> n >> k >> x;
        ll min_sum = (k * (k + 1)) / 2;
        ll max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        if (x <= max_sum && x >= min_sum)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    return 0;
}