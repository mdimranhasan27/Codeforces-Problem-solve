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
    int evn=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) evn++;
        else odd++;
    }
    if(evn==n || odd==n)
      {
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
      }
     cout<<"\n";
    }
    else
    {
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
         }
         cout<<"\n";
     }
    }
    return 0;
}