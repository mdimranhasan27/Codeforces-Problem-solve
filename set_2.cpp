//~imran~

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                mp[v[i][j]]=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++)
            {
                if(v[i][j-1]==v[i][j])
                mp[v[i][j]]=2;

            }
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i-1][j]==v[i][j])
                mp[v[i][j]]=2;
            }
        }
        int ans=0;
        int mxFreq=0;
        for(auto it:mp){
            ans+=it.second;
            mxFreq=max(mxFreq,it.second);
        }
        cout<<(ans-mxFreq)<<"\n";

    }
    return 0;
}