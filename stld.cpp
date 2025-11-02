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
    vector<int>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    set<int>s(v.begin(),v.end());
    vector<int>u(s.begin(), s.end());
    if(u.size()<2){
        cout<<"NO\n";
    }
    else
    cout<<u[1]<<"\n";
    
    return 0;
}