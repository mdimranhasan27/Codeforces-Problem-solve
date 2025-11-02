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
    int x,a,b;
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<"\n";
    for(int y:v){
        cout<<y<<" ";
    }
    return 0;
}