#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[2*n];
        int sum=0;
        for(int i=0;i<2*n;i++){
          cin>>arr[i];
            sum+=arr[i];
        }
        int ans=2*(2*m+sum-arr[0]-arr[1]);
        cout<<ans<<endl;
    }
    return 0;
    
}