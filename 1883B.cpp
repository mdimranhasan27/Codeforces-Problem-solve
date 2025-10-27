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
    int n,k;
    cin >>n >>k;
    vector<char>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<char,int>freq;
    for(char c:v){
        freq[c]++;
    }
    int sum=0;
    for(auto [key,count]:freq){
        if(count%2==1) sum++;

    }
    if(sum<=k+1) cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}