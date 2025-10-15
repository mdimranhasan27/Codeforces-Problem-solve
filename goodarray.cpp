//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>v2(n);
    for(int j=0;j<n;j++){
        cin>>v2[j];
    }
    set<int>s1(v1.begin(),v1.end());
    set<int>s2(v2.begin(),v2.end());
    
    if((s1.size()+s2.size())>3)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    }
    return 0;
}