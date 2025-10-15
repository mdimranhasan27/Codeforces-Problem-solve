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
    long long n,x;
    cin>>n;
    if(n<10) cout<<n<<"\n";
    else if(n>=10){
         x=n/9;
         if(n%9==0)
         cout<<x+n-1<<"\n";
         else
         cout<<x+n<<"\n";
    }
    }
    return 0;
}