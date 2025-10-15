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
    int n,m,cnt=0,j=0;
    cin>>n>>m;
    string s,a;
    cin>>s>>a;
    for(int i=0;i < m && j<n ;i++){
        if(s[j]==a[i]){
            cnt++;
            j++;
        }
    }
    cout<<cnt<<"\n";
    }
    return 0;
}