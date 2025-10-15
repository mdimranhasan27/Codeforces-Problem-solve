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
    int a,b,c;
    cin>>a>>b>>c;
    int rem = c%(a+b);
    if(rem>=a)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    }
    return 0;
}