#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,j,k;
        for( i=1;i<27;i++){
            for( j=1;j<27;j++){
                for( k=1;k<27;k++){
                    int sum=i+j+k;
                    if(sum==n)
                    goto next;
                }
            }
        }
        next:;
        char xx=96+i,yy=96+j,zz=96+k;
        cout<<xx<<yy<<zz<<endl;
    }
    return 0;
}