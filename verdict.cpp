//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        sum+=y;
    }
    if(sum%n==0&&sum/n==x)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    }
    return 0;
}