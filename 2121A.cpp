//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,k;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    n=n+1;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    k=a[0];
    sort(a.begin(),a.end());
    int sum=a[n-1]-a[0]+ min(k-a[0],a[n-1]-k);
    cout<<sum<<endl;

    }
    return 0;
}