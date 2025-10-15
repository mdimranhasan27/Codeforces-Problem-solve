#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
     while(t--){
     int n,k;
        int f2;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       f2=0;
    for(int j=0;j<n;j++){
        if(i!=j&&(a[i]-a[j])%k==0){
           f2=1;
           break;
        }
    }
       if(f2==0){
          cout<<"yes\n"<<i+1<<endl;
         break;
        }
    }
    if(f2==1)
        cout<<"no"<<endl;
    }
    return 0;
    }