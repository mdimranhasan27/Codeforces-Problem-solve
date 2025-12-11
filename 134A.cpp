//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sum = 0;
    cin >> n;
    vector<ll> v(n);
    vector<ll> p;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % n != 0)
    {
        cout << 0 << "\n";
        return 0;
    }/*
    condition = s-a[i]/(n-1)=a[i];
    a[i]*n-a[i]=s-a[i];
    a[i]*n=s;
    a[i]=s/n;
    */
    ll avg = sum / n;
    for (ll i = 0; i < n; i++)
    {
        if (avg == v[i])
        {
            p.push_back(i + 1);
        }
    }
    cout << p.size() << "\n";
    for (auto h : p)
    {
        cout << h << " ";
    }

    return 0;
}