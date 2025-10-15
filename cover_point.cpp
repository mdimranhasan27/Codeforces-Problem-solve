//~imran~

#include <bits/stdc++.h>
using namespace std;

long long a,b,sum,x;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
     for(int i=0;i<t;i++){
        cin>>a>>b;
        x=a+b;
        sum=max(sum,x);
    }
    cout<<sum;
    return 0;
}