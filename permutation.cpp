#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long i,n,k;
        cin>>n>>k;
        long long a[n+10];
        long long x=0;
        long long y=1;
        for(i=1;i<=n;i++){
            a[i]=0;
        }
        while(x+k<=n){
            x+=k;
            a[x]=y;
            y++;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                a[i]=y;
                y++;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}