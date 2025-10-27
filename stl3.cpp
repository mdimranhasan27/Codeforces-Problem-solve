
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
    vector<int>v(2*t);
    for(int i=0;i<2*t;i++){
        cin>>v[i];
    }
    unordered_set<int>s;
    int table=0,Max=0;
    for(int i=0;i<2*t;i++){
       
        if(s.count(v[i])){
        s.erase(v[i]);
        table--;
        }
        else{
            s.insert(v[i]);
            table++;
            Max=max(Max,table);
            
        }
    }
    cout<<Max<<"\n";
    return 0;
}