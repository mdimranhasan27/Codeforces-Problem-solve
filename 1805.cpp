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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i=0;i<n-1;i++){
       v[i+1] = v[i]^v[i+1];
    }
    int x=v[n-1],p=n;
    while(p--){
        v[n-1]=v[n-1] ^ x;
    }
    if(v[n-1]==0)
    cout<<x<<"\n";
    else
    cout<<"-1"<<"\n";

    }
    return 0;
}