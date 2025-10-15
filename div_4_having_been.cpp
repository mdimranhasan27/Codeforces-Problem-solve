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
    long long i,n,M=0,U=0;
    cin>>n;
    char s;
    for(i=0;i<n;i++){
        cin>>s;
        if(s=='-')
           M++;
        else 
           U++;
    }
    if(M<2 || U<1)
    cout<<"0"<<"\n";
    else if(M%2==0)
    cout<<(M/2*M/2*U)<<"\n";
    else
    cout<<(M/2*(M/2+1)*U)<<"\n";
    

    }
    return 0;
}