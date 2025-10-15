//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string,int>> v;

    for(int i=0;i<5;i++)
    {
        string s;int x;
        cin>>s >>x;
        v.push_back({s,x});
    }
    sort(v.begin(),v.end());
    for(auto y:v) cout<<y.first <<" " <<y.second <<endl;
}