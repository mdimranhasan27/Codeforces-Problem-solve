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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            if(i%2==0 &&arr[i]%2!=0) even++;
            if(i%2==1 && arr[i]%2!=1) odd++;
            }
        
        if(even==odd)
        cout<<even<<"\n";
        else
        cout<<"-1"<<"\n";
    }
    return 0;
}