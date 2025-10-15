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
        long long n,sum1=0,sum2=0,i,j,x;
        cin>>n;
        x=n/2;
        if(n%4!=0) {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES\n";
        for(i=2;i<=n;i+=2){
            sum1+=i;
           cout<<i<<" ";
        }
        for(int j=1;j<n-1;j+=2){
            sum2+=j;
            cout<<j<<" ";
        }
        cout<<(sum1-sum2)<<"\n";
    }
    return 0;
}