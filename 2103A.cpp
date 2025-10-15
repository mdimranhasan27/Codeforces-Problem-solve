//~imran~
/*
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
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<"\n";
    }
    return 0;
}
*/
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
    int n,tar=1;
    cin>>n;
    vector<int>v(n);
    vector<int>m;
    for(int i =0;i<n;i++){
        cin>>v[i];
        tar*=v[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int y=tar/v[i];
        auto it = find(v.begin(), v.end(),y);
        if(it == v.end()){
            m.push_back(y);
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
 
}