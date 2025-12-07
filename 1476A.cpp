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
        ll n, k, i;
        cin >> n >> k;
        i = (n + k - 1) / k;
        k *= i;
        cout << ((n + k - 1) / n) << "\n";
    }
    return 0;
}