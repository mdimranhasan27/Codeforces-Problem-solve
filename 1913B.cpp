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
        ll length = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0' && cnt1 > 0)
            {
                cnt1--;
                length++;
            }
            else if (str[i] == '1' && cnt0 > 0)
            {
                cnt0--;
                length++;
            }
            else
                break;
        }
        cout << str.length() - length << "\n";
    }
    return 0;
}