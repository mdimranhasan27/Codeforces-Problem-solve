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
    int n , k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
   auto it= find(a.begin(),a.end(),k);
    if(it!=a.end())
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    }
    return 0;
}