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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(m);
        multiset<int> p;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            p.insert(x);
        }
        string str;
        for (int i = 0; i < m; i++)
        {
            auto it = p.find(v[i]);
            int s = p.size();
            if (it != p.end() && s == n)
                str += '1';
            else if (it == p.end() && s == n - 1)
                str += '1';
            else
                str += '0';
        }
        cout << str << "\n";
    }
    return 0;
}