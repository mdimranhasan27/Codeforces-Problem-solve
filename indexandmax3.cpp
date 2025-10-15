//~imran~

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
    ll n,m,x,mx=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        mx=max(x,mx);
    }
    for(int i=0;i<m;i++){
        char c;ll y,z;
        cin>>c>>y>>z;
        if(mx>=y && mx<=z)
        {
            if(c=='+')
            mx++;
            else
            mx--;
        }
        cout<<mx<<" ";
    }
    cout<<"\n";
    }
    return 0;
}