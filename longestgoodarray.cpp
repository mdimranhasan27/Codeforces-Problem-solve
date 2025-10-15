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
    while(t--)
    {
        ll l,h;cin>>l>>h;
        ll d=l-h;
        ll r=sqrt(1-8*d);
        ll ans=(-1-r)/2;
        cout<<-ans<<endl;
    }
    return 0;
}