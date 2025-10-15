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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_set<int>s(a.begin(),a.end());
    int mex=0,sum=0;
    for(int x : s) sum+=x;
    while(s.count(mex)) mex++;
   
    cout<<mex+sum<<endl;
    }
    return 0;
}