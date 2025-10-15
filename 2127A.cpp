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
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool zero = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
            zero = true;
            }
        }

        if (zero) {
            cout << "NO\n";
            continue; 
        }

        set<int> s(a.begin(), a.end());
        if (s.size() == 1  )
            cout << "YES\n";
        else if(*s.begin()==-1 && s.size() == 2)
             cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
