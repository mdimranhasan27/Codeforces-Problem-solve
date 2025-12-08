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
        vector<int> v(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int mid, cnt = 0;
        mid = ((n + 1) / 2);
        sort(v.begin(), v.end());
        v[mid]++;
        cnt++;
        for (int k = mid; k < n; k++)
        {
            if (v[k] > v[k + 1])
            {
                v[k + 1]++;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}