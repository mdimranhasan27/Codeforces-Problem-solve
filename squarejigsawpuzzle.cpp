#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        int count=0;
        for(int i=0;i<n;i++){
            int root=sqrt(arr[i]);
            if(root*root==arr[i] && root%2==1){
            count++;
            }
        }
        cout<<count<<endl;

    }
    return 0; 
}