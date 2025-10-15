//~imran~

#include <bits/stdc++.h>
using namespace std;

int odd[2005],even[20005],o,e,x,n,sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        x%2?odd[o++]=x:even[e++]=x;
    }
    sort(odd,odd+o);sort(even,even+e);
    if(o>e)
    for(int i=0;i<o-e-1;i++) sum+=odd[i];
    else
    for(int i=0;i<e-o-1;i++) sum+=even[i];
    cout<<sum;

    
   
    return 0;
}