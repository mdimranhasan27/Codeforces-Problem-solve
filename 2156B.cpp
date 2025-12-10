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
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    vector<int>v(q);
    for(int i=0;i<q;i++){
        cin>>v[i];
    }
    bool allA=true;
    for(int i=0;i<n;i++){
        if(str[i]=='B'){
            allA=false;
            break;
        }
    }
    for(int i=0;i<q && !allA ;i++){
        int a=v[i];
        int cnt=0,k=0;
        while(a!=0){
            if(str[k]=='A') a-=1;
            else a/=2;
            cnt++;
            k++;
            if(k==n) k=0;
        }
        cout<<cnt<<"\n";
    }
    if(allA) for(int i=0;i<q;i++){
        cout<<v[i]<<"\n";
    }
    
    }
    return 0;
}