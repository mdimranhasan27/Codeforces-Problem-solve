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
    vector<string>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    vector<string>s;
    for(int i=0;i<t;i++){
        auto it=find(s.begin(),s.end(),v[i]);
        if(it==s.end()){
            cout<<"NO\n";
        }
         else{
            cout<<"YES\n";
        }
        s.push_back(v[i]);
    }
    return 0;
}