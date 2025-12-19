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
        string str;
        cin >> str;
        ll cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
                cnt0++;
            else
                cnt1++;
        }
        if (cnt0 == cnt1)
            cout << 0 << "\n";
        else if (cnt0 == 0)
            cout << cnt1 << "\n";
        else if (cnt1 == 0)
            cout << cnt0 << "\n";
        else
            cout << str.length() - max(cnt0, cnt1) << "\n";
    }
    return 0;
}