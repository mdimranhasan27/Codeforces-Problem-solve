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
    long long x=sqrt(n),f=0;
        for(int i=0;i<x;i++){
            if(str[i]=='0'){
                f=1;
                break;
            }
        }
    if(x*x==n && str[x+1] =='0'&&f==0||n==4) 
        cout<<"Yes"<<"\n";
    else
         cout<<"No"<<"\n";

    }
    return 0;
}