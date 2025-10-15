//~imran~

#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=(n*(n+1))/2;
        ll x=sqrt(sum);
        if(x*x==sum){
            cout<<"-1"<<"\n";
            continue;
        }
        else{
            ll sum=0;
            vector<ll>v;
            for(int i=1;i<=n;i++){
                if(!v.empty()){
                    cout<<v.back()<<" ";
                    sum+=v.back();
                    v.pop_back();
                }
                else{ 
                      ll  take=sum+i;
                      ll sq=sqrt(take);
                      if(sq*sq==take){
                      cout<<(i+1)<<" ";
                      sum+=i+1;
                      v.push_back(i);
                      }
                      else
                      {
                        cout<<i<<" ";
                        sum+=i;
                      }
                 }

                
            }
           
        }
        cout<<"\n";
    
    }
    return 0;
}