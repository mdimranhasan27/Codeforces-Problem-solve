//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    if(t%2!=0)
    cout<<"-1";
    else
    {
        int i=2,j=1,n=t/2;
    while(n--){
        cout<<i<<" "<<j<<" ";
        i+=2;j+=2;
    }
}
    return 0;
}