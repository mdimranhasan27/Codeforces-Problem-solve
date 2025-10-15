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
        ll n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>v1;
        for(int i=0;i<m;i++){
            char c;
            ll x,y;
            cin>>c>>x>>y;
            if(c=='+')
            {
             for(int i=0;i<n;i++)
               {
                if( v[i] >= x && v[i] <= y )
                v[i]+=1;
               }
            
            auto max_it=max_element(v.begin(),v.end());
            v1.push_back(*max_it); 

            }
            else{
                for(int i=0;i<n;i++)
                {
                 if(v[i] >= x && v[i] <= y)
                 v[i]-=1;
                }
            auto max_it=max_element(v.begin(),v.end());
            v1.push_back(*max_it); 

             }

            }
            for(int z : v1)
            cout<<z<<" ";
            cout<<"\n";

        }
    
    
    return 0;
}
