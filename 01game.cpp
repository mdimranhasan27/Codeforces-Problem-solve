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
    string s;
    cin>>s;
    int c0=0,c1=0;;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') c0++;
        else c1++;
    }
    if(min(c0,c1)%2==0)
    cout<<"NET"<<"\n";
    else
    cout<<"DA"<<"\n";
    }
    return 0;
}