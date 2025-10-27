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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=0;
    vector<int>a;
    for(int i=0;i<n;i++){
        if(v[i]==0) cnt++;
        else{
            a.push_back(cnt);
            cnt=0;
        }
    }
    a.push_back(cnt);
    if (a.empty()) cout << 0 << "\n";
    else cout << *max_element(a.begin(), a.end()) << "\n";
    
    }
    return 0;
}