//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    string s;
    string str;
    while(t--)
    { 
        cin>>s>>str;
        int  i,n=min(s.size(),str.size());
        for( i=0;i<n&&s[i]==str[i];)i++;
        cout<<(str.size()+s.size())-max(i-1,0)<<"\n";
        
    }
    return 0;
}