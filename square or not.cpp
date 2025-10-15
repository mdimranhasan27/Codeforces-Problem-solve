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
    long long n;
    cin>>n;
    string str;
    cin>>str;
    long long x=sqrt(n);
    if(x*x==n)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";

    }
    return 0;
}