#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n-2;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<n-3;i++){
            if(a[i-1]==1 && a[i]== 0 && a[i+1]==1)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    
    return 0;
}