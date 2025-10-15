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
    int n , k;
    cin >> n>> k;
    vector<ll>a(2 * n);
    ll y=0,z=0;
    vector<ll>c(n);
    for(int i = 0; i < 2*n; i++){
        cin>>a[i];
    }
    for(int i = 0;i < n; i++){
         y+=max(a[i],a[i+n]);
        c[i]=min(a[i],a[i+n]);
    }
    sort(c.begin(),c.end(),greater<int>());
    for(int i = 0;i < k-1; i++){
         z += c[i];

    }
    cout<< y + z + 1 <<"\n";
    }
    return 0;
}