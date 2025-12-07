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
    set<int> s;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if (s.size() < 3)
        cout << "0\n";
    else
    {
        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());
        int freq1 = count(v.begin(), v.end(), mx);
        int freq2 = count(v.begin(), v.end(), mn);

        cout << (t - freq1 - freq2);
    }
    return 0;
}