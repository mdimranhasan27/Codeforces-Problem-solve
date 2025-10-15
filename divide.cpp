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
    long long  n,cnt=0;
    cin>>n;
    while(1){
        if(n==1){
            cout<<cnt<<"\n";
            break;
        }
        else if(n%2==0) n=n/2;
        else if(n%3==0) n=(2*n)/3;
        else if(n%5==0) n=(4*n)/5;
        else{
            cout<<"-1"<<"\n";
            break;
        }
        cnt++;
    }
    }
    return 0;
}