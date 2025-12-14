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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
            {
                cnt++;
            }
        }
        ll ct = 0, ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
            {
                ct++;
            }
            if (ct == cnt - ct)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}