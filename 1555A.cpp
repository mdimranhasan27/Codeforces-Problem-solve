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
        ll n;
        cin >> n;
        if (n < 6)
            cout << "15\n";
        else if (n % 2 == 0)
            cout << (n / 2) * 5 << "\n";
        else
            cout << ((n + 1) / 2) * 5 << "\n";
    }
    return 0;
}