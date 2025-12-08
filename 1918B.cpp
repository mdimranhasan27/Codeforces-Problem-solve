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
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first ;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i].second;
    }
    sort(v.begin(), v.end()); // sort by first element 

    for (int i = 0; i < n; i++) {
        cout << v[i].first<<" " ;
    }
    cout<<"\n";
    for (int i = 0; i < n; i++) {
        cout << v[i].second<<" ";
    }
    cout<<"\n";
    }
    return 0;
}