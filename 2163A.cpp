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
        sort(v.begin(), v.end());
        for (int i = 1; i < n -1 ; i += 2)
        {
            swap(v[i], v[i + 1]);
        }
        bool isTrue = true;
        for (int i = 0; i < n -1; i++)
        {
            if (v[i + 1] < v[i])
            {
                isTrue = false;
                break;
            }
        }
        if (isTrue)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}