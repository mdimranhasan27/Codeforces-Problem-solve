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
    int n,m;
    cin>>n>>m;
    set<int>s;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int z=s.size();
    if(z%2==1){
        int a=s.size()/2+1,sum=0;
        for(int j=0;j<s.size();j++){
           sum+=abs(s[j]-s[a]);
        }
        cout<<sum<<"\n";
    }
    else{
        int b=s.size()/2,sum1=0;
        for(int k=0;k<m;k++){
            sum1+=abs(s[b]-s[k]);
        }
        cout<<sum1<<"\n";
    }
    }
    return 0;
}