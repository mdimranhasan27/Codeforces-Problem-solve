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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
        }
        v[r] = v[l - 1];
        cout << v[1] << " ";
        for (int i = 2; i <= n; i++)
        {
            cout << (v[i] ^ v[i - 1]) << " ";
        }
        cout << "\n";
    }
    return 0;
}