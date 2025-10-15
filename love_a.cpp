//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int a=0,o;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a') a++;
    }
    o=s.size()/2;
    if(a>o) cout<<s.size();
    else cout<<a+1;
    return 0;
}