//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
      printf("%d",arr[i]);
    }
    cout<<arr[0];
    for(int i=0;i<3;i++){
        for(int j=0;i<2;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
    if(arr[0]*arr[1]==arr[2])
    cout<<"YES";
    else
    cout<<"NO";
    
    cout<<arr[0];

    return 0;
}