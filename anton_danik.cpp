//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t,d=0,a=0;
    cin>>t;
    char str[t+1];
    for(int i=0;i<t;i++){
        cin>>str[i];
        if(str[i]=='D')
         d++;
         else
         a++;
    }
    if(a>d)
    cout<<"Anton";
    else if(d>a)
    cout<<"Danik";
    else
    cout<<"Friendship";

    return 0;
}