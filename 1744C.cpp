//~imran~
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string str;
        cin >> str;
        str = str + str;

        int G = -1;
        int mx = 0;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (str[i] == 'g')
            {
                G = i;
            }
            if (str[i] == c && G != -1)
            {
                mx = max(mx, G - i);
            }
        }

        cout << mx << "\n";
    }
}
