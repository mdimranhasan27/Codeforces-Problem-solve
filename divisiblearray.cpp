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
        int n;
        cin>>n;
           for(int i=2;i<=2*n;i+=2){
            cout<<i<<" ";
           }
            cout<<"\n";
    }
    return 0;
}