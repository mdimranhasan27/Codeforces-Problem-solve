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
    sort(v.begin(),v.end());
    if(v[0]==v[n-1]){
        cout<<"NO\n";
        continue;
    }

    cout<<"YES\n"<<v[n-1]<<" "<<v[0]<<" ";
    for(int i=1;i<n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    }
    return 0;
}