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
    ll n , k , sum =0;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0 ;i < n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    v[n-1]--;
    sort(v.begin(),v.end());
   if(v[n-1]- v[0] > k || sum%2==0 ){
      cout<<"Jerry"<<"\n";
      continue;
    }
    cout<<"Tom"<<"\n";
       
    }
    return 0;
}