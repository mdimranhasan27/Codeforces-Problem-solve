//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll s, x, cnt = 0;
    cin >> s >> x;
    ll X=x;
    while (X != 0)
    {
        if (X % 2 == 1)
        {
            cnt++;
        }
        X /= 2;
    }
    if (((s - x) / 2) * 2 != (s - x))
        cout << 0;
    else
        cout << pow(2, cnt);
    return 0;
}