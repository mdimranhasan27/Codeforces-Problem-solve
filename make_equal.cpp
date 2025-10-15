#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long int n;
        cin>>n;
        int arr[n];
       long int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];

        }
       long int AVr=sum/n;
       long int flag_n=0,flag_p=0,f=0;
        for(int i=0;i<n;i++){
            
           if((arr[i]-AVr)>0){
            flag_p+=(arr[i]-AVr);
           }
           else
           flag_n+=abs(arr[i]-AVr);
           if(flag_p<flag_n){
           f=1;
            break;
           }
        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
    return 0;
}