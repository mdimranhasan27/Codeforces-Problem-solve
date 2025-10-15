
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a13,a23,a33,a4,a5;
        scanf("%d%d%d%d",&a1,&a2,&a4,&a5);
        a13=a1-a2;
        a23=a4-a2;
        a33=a5-a4;
        if(a13==a23==a33){
            cout<<3<<endl;
        }
        else if(
           (a13==a23!=a33) ||(a23==a33!=a13)||(a13==a33!=a23)
        )
        cout<<2<<endl;
        else
        cout<<1<<endl;
        
    }
    return 0;
    
}