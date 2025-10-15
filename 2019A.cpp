//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int idx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n ;
    cin>>n;
    int mx1=0,mx2=0,d=(n+1)/2,l=n/2;
    for(int i =1;i<=n;i++){
        int x;
        cin>>x;
        if(i%2==0)
        mx1=max(x,mx1);
        else
        mx2=max(x,mx2);
    }
    cout<<max(mx1+l,mx2+d)<<"\n";
    }
    return 0;
}