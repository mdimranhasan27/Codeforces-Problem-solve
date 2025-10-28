//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin >> x;
    int sum=0;
    while(x>0){
        sum+=x%2;
        x/=2;
    }
    cout<< sum ;
    return 0;
}