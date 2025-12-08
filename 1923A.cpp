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
        int n,left,right,cnt=0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                left = i;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (v[j] == 1)
            {
                right = j;
                break;
            }
        }
        for (int k = left; k <= right; k++)
        {
            if (v[k] == 0)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}