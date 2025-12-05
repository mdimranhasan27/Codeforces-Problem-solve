//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n <= 2)
    {
        cout << "0\n";
        for (int j = 0; j < n; j++)
        cout << v[j] << " ";
        return 0;
    }

    sort(v.begin(), v.end());
    vector<int> B;
    int x = 0, y = n - 3;
    B.push_back(v[n - 2]);
    while (x < y)
    {
        B.push_back(v[x]);
        B.push_back(v[y]);
        x++;
        y--;
    }
    if (x == y)
        B.push_back(v[x]);
    B.push_back(v[n - 1]);
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (B[i] < B[i - 1] && B[i] < B[i + 1])
            cnt++;
    }
    cout << cnt << "\n";
    for (int j = 0; j < n; j++)
        cout << B[j] << " ";
    return 0;
}