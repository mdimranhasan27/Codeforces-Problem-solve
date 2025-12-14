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
        vector<int> p(n);
        vector<int> f(n);
        f[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            f[i] = f[i - 1] * v[i];
        }
        p[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            p[i] = p[i + 1] * v[i];
        }

        /*for(int x:f)cout<<x<<" ";
        cout<<"\n";
        for(int y:p)cout<<y<<" ";
        cout<<"\n";*/
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (p[i + 1] == f[i])
            {
                cout << i + 1 << "\n";
                ok = false;
                break;
            }
        }
        if (ok)
            cout << -1 << "\n";
    }
    return 0;
}