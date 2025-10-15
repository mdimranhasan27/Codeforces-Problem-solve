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
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        auto it=find(v.begin(),v.end(),x);
        if(it==v.end())
          v.push_back(x);
    }
    for(auto z: v)
    cout<<z<<" ";
    
    cout<<"\n";
}

    return 0;
}