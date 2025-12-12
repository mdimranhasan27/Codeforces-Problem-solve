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
        int idx = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << idx << " " << idx + 1 << " " << idx + 2 << "\n";
        }
    }

    return 0;
}