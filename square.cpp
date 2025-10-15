//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int y=max(a,b),z=max(c,d);
    a=a*b;
    c=c*d;
    a=a+c;
    int p=sqrt(a);
    if(z==y && p*p==a)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
    }
    
    return 0;
}