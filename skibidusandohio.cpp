#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char str[105];
        cin>>str;
        int len=strlen(str);
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]==str[i-1]){
                count++;
            }
        }
        if(count==0){
            cout<<len<<endl;
        }
        else
        cout<<"1"<<endl;

    }
    return 0;
}