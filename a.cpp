//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
    string s;
    cin>>s;
    if(s[7]=='l'||s[8]=='l'){
    cout<<"Case "<<i<<": "<<"https://lightoj.com"<<"\n";
    }
    else{
    cout<<"Case "<<i<<": "<<"https://example.com"<<"\n";
    }
    }
    return 0;
}