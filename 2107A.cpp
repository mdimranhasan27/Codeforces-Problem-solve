//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        if (mn == mx){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        for (int i = 0; i < n; i++){
            cout << (1 + (a[i] == mx)) << " \n"[i + 1 == n];
        }
    
    }
    return 0;
}