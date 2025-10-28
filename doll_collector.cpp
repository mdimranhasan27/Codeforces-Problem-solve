
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
        ll s;
        cin >> s;

      ll ans=(-1+sqrt(1+8*s))/2;
      cout << ans << "\n";
    }
    return 0;
}