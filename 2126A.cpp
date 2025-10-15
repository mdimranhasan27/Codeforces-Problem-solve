//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int solve(int n){
    int min=10000;
    while(n>0){
        int rem=n%10;
        n=n/10;
        if(rem<min) min=rem;
    }
    return min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
    }
    return 0;
}