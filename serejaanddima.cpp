//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,s=0,d=0;
    cin>>t;
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    } 
    int mn=0,mx=t-1;
    for(int i=0;mn<=mx;i++)
    {  
        if(v[mn]>v[mx]) 
        {
           if(i%2==0) s+=v[mn];
           else d+=v[mn];
             mn++;
        }
        else 
        {
            if(i%2==0) s+=v[mx];
            else d+=v[mx];
            mx--;
        }
    } 
    cout<<s<<" "<<d;
    
    return 0;
}