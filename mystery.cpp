#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
         long long i=1,x;
        while(i>0){
            x=b*i;
            if(x%a==0){
                break;
            }
            i++;
        }
        cout<<x<<endl;
    }
    return 0;
}