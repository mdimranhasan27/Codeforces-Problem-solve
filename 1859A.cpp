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
    cin >> n;
    vector<int>v(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v.front() == v.back()) {
        cout << "-1\n";
        continue;
    }
       int it = 0;
        while(v[it] == v[0]) it++; 
        cout << it << " " << n - it << "\n";
        for(int i = 0; i < it; i++) cout << v[i] << " ";
        cout << "\n";
        for(int i = it; i < n; i++) cout << v[i] << " ";
        cout << "\n";

    }
    return 0;
}