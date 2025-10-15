//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    while(t--){
       long long n,i,j;
        cin>>n;
        int arr[200005];
        for( i=0;i<n;i++){
            cin>>arr[i];
        }
        int x=0;
        for( j=0;j<n-1;j++){
               if( arr[j]>arr[j+1]) x=1;
               arr[j+1]-=arr[j];
            }
       if(x==0) cout << "YES\n";
        else cout<<"NO\n";    
    }
    return 0;
}