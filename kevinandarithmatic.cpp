#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int odd=0,even=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            long int num;
            cin>>num;

            if(num%2==0){
                even++;
            }
            else
            odd++;
        }
        if(even==0)
        cout<<odd-1<<endl;
        else if(odd==0)
        cout<<1<<endl;
        else 
        cout<<odd+1<<endl;
    }
}