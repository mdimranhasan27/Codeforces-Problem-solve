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
        for (int i = 0; i < n ; i++)
        {
            v[i]+=1;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] % v[i] == 0)
                v[i + 1] += 1;
        }
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}