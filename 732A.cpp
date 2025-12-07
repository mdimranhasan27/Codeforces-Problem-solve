//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r, n = 1, sum = 0;
    cin >> k >> r;
    while (true)
    {
        sum = n * k;
        if (sum % 10 == 0)
        {
            break;
        }
        else if (sum % 10 != r)
            n++;
        else
            break;
    }
    cout << n;

    return 0;
}