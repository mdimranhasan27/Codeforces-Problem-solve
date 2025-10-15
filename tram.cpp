//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int y=0,x=0,z=1;
    for(int i=1;i<2*n-2;i+=2){
        if(z==1){
         x+=abs(arr[i]-arr[i+1]+arr[i+2]);
         if(x==0){ 
            cout<<arr[i];
            break;
         }
         z=-1;
       
        }
        else
         x=abs(x-arr[i+1]+arr[i+2]);
         y=max(x,y);

    }
    cout<<y;
    return 0;
}