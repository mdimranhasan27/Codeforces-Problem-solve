#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         char str[12];
        cin>>str;

        for(int i=0;i<strlen(str)-2;i++){
            cout<<str[i];
        }
        cout<<"i"<<"\n";
    }
    return 0;
}