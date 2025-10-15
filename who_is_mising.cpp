//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,x=0;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++){
         int x;
         cin>>x;
         v.push_back(x);
    }
    for(int j=1;j<=n;j++){
        auto it=find(v.begin(),v.end(),j);
        if(it==v.end()){
        cout<<j<<" ";
        x=1;
        }


    }
    if(x==0)
    cout<<0;
    return 0;
}