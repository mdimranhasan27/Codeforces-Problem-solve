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
        int n,k,p;
        cin>>n>>k>>p;
        if(k==0)
        cout<<"0"<<"\n";
        else if(k%p==0)
        {
            int x=abs(k/p);
            if(x<=n)
            cout<<x<<"\n";
            else
            cout<<"-1"<<"\n";
        }
        else{

            int x=abs(k/p);
            if(x<n)
            cout<<x+1<<"\n";
            else
            cout<<"-1"<<"\n";
        }

        }
        
    return 0;
}