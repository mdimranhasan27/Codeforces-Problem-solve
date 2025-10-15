#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int count=1;
        if(n<4)
        cout<<1<<endl;
        else{
        while(n>3){
             n=n/4;
            count*=2;
        }
        cout<<count<<endl;

    }
}
    return 0;
}