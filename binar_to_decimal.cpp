#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=0;
    while(t--){
         int n;
        cin>>n;
        int i=0,sum=0;
        while(n>0){
        int rem=n%10;
        sum+=rem*pow(2,i);
        n=n/10;
        i++;
       
        }
        cout<<sum<<endl;
    }
    return 0;
}