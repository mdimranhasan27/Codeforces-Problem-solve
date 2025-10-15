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
    int x,n,m,y=0;
    cin>>x>>n>>m;
    if(x<=m*10){
    cout<<"YES"<<"\n";
    continue;
    }
    for(int i=0;i<n;i++){
        x=x/2+10;
        if(x<=0)
        {
            cout<<"YES"<<"\n";
            y=1;
            break;
        }
    }
    for(int j=0;j<m;j++){
        x=x-10;
        if(x<=0)
        {    y=1;
             break;
        }
    }
    if(y==0)
        cout<<"NO"<<"\n";
     else
        cout<<"YES"<<"\n";

    

    }
    return 0;
}