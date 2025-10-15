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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
           cin>>v[i];
        bool flag=true;
        for(int j=1;j<=n;j++){
            if(v[j-1]<=2*(max(j-1,n-j))){
               flag=false;
               break;
            }
        }
        if(flag)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}