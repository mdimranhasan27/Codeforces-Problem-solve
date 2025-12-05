//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a;
    cin>>t;
    vector<int>v;
    while(t--){
    int n;
    cin>> n;
    a=n;
    v.push_back(n);
    for(int i=n-1;i>0;i--){
        a=(i+a+1)/2;
        v.push_back(i);
        v.push_back(a);
    }
    }
    cout<<a<<"\n";
    v.pop_back();
    int cnt=0;
    for(int x : v) {
        cout<<x<<" ";
        cnt++;
        if(cnt==2){
            cout<<"\n";
            cnt=0;
        }
    }
    return 0;
}