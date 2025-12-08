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
        string str;
        cin >> str;
        bool zero = true;
        int cnt = 0;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            char c = str[i];
            if (zero)
            {
                cnt++;
                if (c != '0')
                    zero = false;
            }
            else
            {
                if (c != '0')
                    cnt++;
            }
        }
        cout << cnt - 1 << "\n";
    }
    return 0;
}