#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     char str[102];
     cin>>str;
     int len=strlen(str);
     if(str[0]==str[len-1]){
        cout<<str<<endl;
     }
     else if(str[0]=='a'&& str[len-1]=='b'){
        str[len-1]='a';
        cout<<str<<endl;
     }
     else 
     {
        str[len-1]='b';
        cout<<str<<endl;
     }
    }
    return 0;
}