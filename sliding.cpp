#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  n,m,r,c;
        cin>>n>>m>>r>>c;
       long long  x=n*m,z=x;
       long long  y=r*c;
       long long  sum=0;
      /* if(y==1){
        cout<<x-1
       }
        while(z>y){
            sum+=x-z;
            z--;
        }
        cout<<sum<<endl;*/
        long long count=0,i,j;
        for(i=1;i<n+1;i++){
            for( j=1;j<m+1;j++){
                if(i>r&&m>c){
                    count++;
                }

            }
        }
        cout<<count<<endl;
    }
    return 0;
}