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
    int n,m;
    cin>>n>>m;
    char s[10005];
    for(int i=0;i<n*m;i++){
        cin>>s[i];
    }
    int ans=0;
    for(int i=m-1;i<n*m;i+=m){
        if(s[i]=='R') ans++;
    }
    for(int i=(n-1) * m;i<n*m;i++){
        if(s[i]=='D') ans++;
    }
    cout<<ans<<"\n";
    }
    return 0;
}