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
        vector<pair<string,int>> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string name;
            int year;
            cin >> name >> year;
            v.push_back({name, year});
    
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto &p : v){
            cout << p.first << "\n";
        }
    
    }
    return 0;
}