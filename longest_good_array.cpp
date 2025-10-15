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
    long long i,l,r;
    cin>>l>>r;
    long long x=1,cnt=0;
    if(l-r==0)
    cout<<"1"<<"\n";
    else if(r-l==2)
    cout<<"2"<<"\n";
    else
    {
        for(i=l;i<=r;i+=x)
    {
        cnt++;
        x+=1;
    }
    cout<<cnt+1<<"\n";
    }
    }
    return 0;
}