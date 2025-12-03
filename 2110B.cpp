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
        string s;
        cin >> s;
        int size = s.length();
        bool t = true;
        for (int i = 0; i < (size / 2); i++)
        {
            if (s[i] != '(' && s[size-1-i]!=')')
            {
                cout << "YES\n";
                t = false;
                break;
            }
        }
        if (t)
            cout << "NO\n";
    }
    return 0;
}