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
    vector<int>p(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
         p[i]=v[i];
    }
    sort(p.rbegin(),p.rend());
    for(int i=0;i<n;i++){
        v[i]=v[i]&p[i];
   }
   sort(v.begin(),v.end());
   cout<<v[0]<<"\n";
}

    
    return 0;
}