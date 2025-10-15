#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f;
        for(int i=0;i<n;i++){
            f=0;
            for(int j=0;j<n;j++){
            if(i!=j && (a[i]-a[j])%k==0){
                f=1;
                break;
            } 
        }
        if(f==0){
            cout<<"YES"<<endl<<i+1<<endl;
            break;
        }
    }
       if(f==1)
        cout<<"NO"<<endl;
    
    }
    return 0;
}