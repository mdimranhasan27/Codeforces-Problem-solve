#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        for(int t=0;t<n-1;t++){
            int mx=max(a[t],a[t+1]);
            int mn=min(a[t],a[t+1]);
            if(2*mn>mx){
                f=1;
                break;
            }
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
    
}