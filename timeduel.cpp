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
    int n,zero=0,one=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) zero++;
        else one++;
    }
    bool twoadj=false;
    for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]==0)
        twoadj=true;
    }
    if(twoadj)
           cout<<"YES\n";
    else if(zero==n || one == n)
            cout<<"YES\n";
    else
         cout<<"NO\n";
    
    }
    return 0;
}
