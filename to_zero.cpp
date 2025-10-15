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
    ll n,k;
    cin>>n>>k;
    if(n%2==0&&n%(k-1)==0){
        cout<<n/(k-1)<<"\n";
        continue;
    }
    else if(n%2==0&&n%(k-1)!=0) {
    cout<<n/(k-1)+1<<"\n";
    continue;
    }
    else if(n%2==1&&n%k==0){
        n=n-k;
        if(n%(k-1)==0){
            cout<<n/(k-1)+1<<"\n";
            continue;
        } 
    }
    else if(n%2==1&&n%k!=0){
        n=n-k;
        if(n%(k-1)!=0){
            cout<<n/(k-1)+2<<"\n";
            continue;
        } 
        
    }

}
    return 0;
}