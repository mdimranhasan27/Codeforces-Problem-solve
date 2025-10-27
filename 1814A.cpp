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
    ll n,k;
    cin>>n>>k;
    if(n % 2 == 0 || n % 2 == k % 2 && k <= n) cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}