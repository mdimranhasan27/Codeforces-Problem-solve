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
    ll n;
    cin >> n;
    vector<ll>a;
    ll p=10;
    for(int i=1;i<18;i++){
        if(n%(1+p)==0){
            a.push_back(n/(1+p));

        }
        p*=p;
    }
    sort(a.begin(),a.end());
    for (ll val : a) {
        cout << val << " ";
    }
    cout << "\n";
    }
    return 0;
}