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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l_prime = l + (n - m) / 2;
        int r_prime = l_prime + m;

        cout << l_prime << " " << r_prime << endl;
    }
    return 0;
}