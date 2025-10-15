//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,a=0;
        cin>>n;
        pair<int,int> p[n];
        for(int i=0;i<n;i++) cin>>p[i].first,p[i].second=i+1;
        sort(p,p+n);
        for(int i=n-1;i>=0;i--) a+=(p[i].first*(n-i-1))+1;
        cout<<a<<endl;
        for(int i=n-1;i>=0;i--) cout<<p[i].second<<" ";
        return 0;
        
    
}