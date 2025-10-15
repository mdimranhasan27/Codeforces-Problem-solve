//~imran~

#include <bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    map<string,int>mp;
   
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        x=s.size();
        mp[s]=x;
    }
    vector<pair<string,int>>vec(mp.begin(),mp.end());
    sort(vec.begin(),vec.end(),[](const auto &a,const auto &b){
        return a.second<b.second;});
    for(auto[key,value]:vec){
        cout<<key;
    }    
    
    return 0;
}