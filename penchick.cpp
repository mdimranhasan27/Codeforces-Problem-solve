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
    int h;
    cin>>h;
    int arr[h];
    for(int i=0;i<h;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<h-1;i++){
       if(arr[i]>arr[i+1]){
        cnt++;
       }
    }
    cout<<cnt<<"\n";

    }
    return 0;
}