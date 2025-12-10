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
    vector<int>v(n),p(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(v.rbegin(),v.rend());
    sort(p.rbegin(),p.rend());
    int target=0;
    for(int i=0;i<n;i++){
        if(p[i]<0) {
            v[i]=v[i]+0;
        }
    }
    }
    return 0;
}