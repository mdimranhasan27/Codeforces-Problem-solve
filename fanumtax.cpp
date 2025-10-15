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
    int n,m,b=0;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]=min(v[i],m-v[i]);
    }
    for(int i=1;i<n;i++){
       if(v[i-1]>v[i]){
        b=1;
       break;
       }
    }
  
   if(b)
   cout<<"NO\n";
   else
   cout<<"YES\n";
    }
    return 0;
}