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
    int n,a;
    cin>>n>>a;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left = lower_bound(v.begin(), v.end(), a) - v.begin();
    int right = v.end() - upper_bound(v.begin(), v.end(), a);
    if(left>right) cout<<a-1<<"\n";
    else cout<<a+1<<"\n";

    }
    return 0;
}