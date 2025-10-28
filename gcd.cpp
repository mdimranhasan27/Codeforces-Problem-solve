//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void GCD(ll x,ll y){
   while(__gcd(x,y)!=1){
        y++;
   }

   cout<<y<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    GCD(v[0],2);
    
    }
    return 0;
}