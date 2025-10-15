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
    long long n,i,count=0,x,y;
    cin>>n;
     x=n%15;
    n=n/15;
   for(i=0;i<=x;i++){
        if(i%3==i%5)
        count++;
    }
    cout<<(count+n*3)<<"\n";
    }
    return 0;
}