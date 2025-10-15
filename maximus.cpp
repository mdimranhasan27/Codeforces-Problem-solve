
//~imran~

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 0,x,b;
   for (ll i = 0; i < n; i++) {
        cin >> x;
        b=sum;
        sum += x;
        cout<<sum<<" ";
        sum=max(sum,b);
    }
   
    return 0;
}
