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
    int n,f=0;
    cin>>n;
    vector<int>v(n);
    cin>>v[0];
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        auto it=find(v.begin(),v.end(),x-1);
        auto it1=find(v.begin(),v.end(),x+1);
        if(it==v.end()||it1==v.end()){
         f=1;   
        cout<<"No"<<"\n";
        continue;
        }
        v.push_back(x);
    }
    if(f=0) cout<<"Yes"<<"\n";
    }
    return 0;
}