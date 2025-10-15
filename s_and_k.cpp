#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0,k=0,x=0;
        int i=1;
        while(i>0){ 
           if(i%2==1){
                x-=(2*i-1);
                if(n<=abs(x)){
                    cout<<"Kosuke"<<endl;
                    break;
                 }
                 i++;
            }
            else{
             x+=(2*i-1);
             if(n<=abs(x)){
                cout<<"Sakurako"<<endl;
                 break;
            }
            i++;
            }
            
        }
    }
    return 0;
}