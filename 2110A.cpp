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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a.begin(),a.end());
    if(a[0]%2==a[n-1]%2){
    cout<<0<<endl;
    continue;   
    }
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(a[0]%2==a[n-i-1]%2){
            r=i;
            break;
        }
     } 
     for(int i=0;i<n;i++){
        if(a[i]%2==a[n-1]%2){
            l=i;
            break;
        }
    } 
    cout<<min(l,r)<<endl;
    }
    return 0;
}


