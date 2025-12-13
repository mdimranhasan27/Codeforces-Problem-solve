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
        string str;
        cin >> str;
        int cnt = 0;
        vector<int> s;
        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
                cnt++;
            else
            {
                s.push_back(cnt);
                cnt = 0;
            }
        }
        s.push_back(cnt);
        auto it = *max_element(s.begin(), s.end());
        cout << it +2 << "\n";
    }
    return 0;
}