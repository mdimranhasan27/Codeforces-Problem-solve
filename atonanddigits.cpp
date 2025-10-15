//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k2,k3,k5,k6,y=0,x=0;
    cin>>k2>>k3>>k5>>k6;
    x=min(min(k2,k5),k6);
    k2=k2-x;
    if(k2>0)
     y=min(k2,k3);

    cout<<x*256+y*32;
    return 0;
}