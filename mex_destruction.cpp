#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[1000005];
        int count=0;
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
            if(arr[i]>0 && arr[i-1]==0){
                count++;
            }
        }
        
        cout<<min(count,2)<<endl;
    }
    return 0;
}
