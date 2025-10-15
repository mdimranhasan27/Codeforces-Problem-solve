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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int Min=INT_MAX;
    for(int i=1;i<n;i++){
        int x=v[i]-v[i-1];
        Min=min(x,Min);
    }
    cout<<Min<<"\n";
    }
    return 0;
}