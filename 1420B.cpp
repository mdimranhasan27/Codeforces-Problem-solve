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
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n * k + 1);
        for (int i = 1; i <= n * k; i++)
        {
            cin >> arr[i];
        }

        ll sum = 0;
        int target = n - ((n + 1) / 2);
        int a = (n * k) - target;
        while (k--)
        {

            sum += arr[a];
            a -= target;
            a--;
        }
        cout << sum << "\n";
    }
    return 0;
}