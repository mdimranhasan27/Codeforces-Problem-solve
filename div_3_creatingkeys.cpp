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
        int n,x,i=0;
        cin>>n>>x;
        if(n==1)
        cout<<x;
       while(i<n)
        {
            if(i|x==x){
            cout<<i<<" ";
            }
            i++;
        }
        cout<<"\n";
    
    }
    return 0;
}