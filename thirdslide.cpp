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
    int n,sum=1;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=(x-1);
    }
    cout<<sum<<"\n";
    }
    return 0;
}