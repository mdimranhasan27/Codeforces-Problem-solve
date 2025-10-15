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
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    vector<int>b(n+1);
    a[0]=0;
    b[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i]>>b[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(b[i]==b[i+1]) sum+=(a[i+1]-a[i]);
        else sum+=(a[i+1]-a[i]-1);
    }
    sum+=(m-a[n]);
    cout<<sum<<endl;

    }
    return 0;
}