#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char k;
        cin>>n>>k;
       long int sum=1;
      for(int i=1;i<=n;i++){
        sum*=i;
      }
      string numstr(sum,k);
      long int result=stoi(numstr);
      for(int i=1;i<10;i+=2){
        if(result%i==0){
            cout<<i<<" ";
        }
      }
      cout<<endl;
       
        
}
    return 0;
}