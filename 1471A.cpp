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
        ll n, x, a, ans1 = 0, ans2 = 0, sum = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            ans2 += (a + x - 1) / x;
        }
        ans1 = (sum + x - 1) / x;
        cout << ans1 << " " << ans2 << "\n";
    }
    return 0;
}