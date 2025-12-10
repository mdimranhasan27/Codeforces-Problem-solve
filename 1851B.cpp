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
        vector<int> p(v.begin(), v.end());
        sort(v.begin(), v.end());
        bool yes = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != p[i] % 2)
            {
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}