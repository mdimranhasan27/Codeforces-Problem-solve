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
    ll a ,b , c;
    cin >>  a >> b >> c;
    if(a>b)
    cout<<"First"<<"\n";
    else if (b>a)
    cout<<"Second"<<"\n";
    else
    {
        if(c%2==1)
        cout<<"First"<<"\n";
        else
        cout<<"Second"<<"\n";

    }
    }
    return 0;
}