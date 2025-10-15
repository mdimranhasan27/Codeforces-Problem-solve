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
    vector<int>v2(n);
    int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v1[i];
       min1=min(min1,v1[i]);
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
        min2=min(min2,v2[i]);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=max((v1[i]-min1),(v2[i]-min2));
    }
    cout<<sum<<"\n";

    }
    return 0;
}