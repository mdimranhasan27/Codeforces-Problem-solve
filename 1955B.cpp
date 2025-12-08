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
        int n, c, d, size, mn;
        cin >> n >> c >> d;
        size = n * n;
        multiset<int> v;
        for (int i = 0; i < size; i++)
        {
            int y;
            cin >> y;
            v.insert(y);
        }
        int x = *v.begin();
        bool is = true;
        for (int i = 0; i < n; i++)
        {
            mn = x;
            for (int j = 0; j < n; j++)
            {
                auto it = v.find(mn);
                if (it == v.end())
                {

                    is = false;
                    break;
                }
                v.erase(it);
                mn += d;
            }
            if (!is)
                break;
            x += c;
        }
        if (is)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}