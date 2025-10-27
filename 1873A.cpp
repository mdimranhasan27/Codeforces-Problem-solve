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
    string str;
    cin>>str;
    int cnt=0;
    if(str[0]!='a') cnt++;
    if(str[1]!='b') cnt++;
    if(str[2]!='c') cnt++;
    if(cnt==3) cout<<"NO\n";
    else cout<<"YES\n";
    }
    return 0;
}