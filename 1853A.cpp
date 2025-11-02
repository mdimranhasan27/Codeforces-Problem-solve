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
    bool desort=false;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]) desort=true;
    }
    if(desort) {
        cout<<0<<"\n";
        continue;
    }
    vector<int>H(n-1);
    for(int j=0;j<n-1;j++){
        H[j]=v[j+1]-v[j];
    }
    auto it = min_element(H.begin(), H.end());
    int in = distance(H.begin(), it);
    int cnt=0,x=v[in],y=v[in+1];
    cnt=((y-x)/2)+1;
    cout<<cnt<<endl;
    }
    return 0;
}