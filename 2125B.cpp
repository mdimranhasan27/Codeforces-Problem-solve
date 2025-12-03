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
    ll a , b, k;
    cin >> a >> b >> k;
    ll g = __gcd(a,b);
    if ((a/g)<=k && (b/g)<=k) cout <<"1\n";
    else cout <<"2\n";
    }
    return 0;
}