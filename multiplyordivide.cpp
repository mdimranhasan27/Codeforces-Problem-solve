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
    int cnt=0;
    long long n;
    cin>>n;
    while(1){
    if(n==1){
    cout<<cnt<<"\n";
    break;
    }
    else if(n%6==0){
        n=n/6;
    }
    else if(n%3==0){
        n=n*2;
    }
    else{
    cout<<"-1"<<"\n";
    break;
    }
    cnt++;
    }
    }
    return 0;
}