//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mx,mx1,mx4,mx2,a,b,c;
    cin>>a>>b>>c;
    mx1=max((a+b)*c ,a*(b+c));
    mx2=max(a*b*c,a+b+c);
    
    mx=max(mx1,mx2);

    cout<<mx;
    return 0;
}