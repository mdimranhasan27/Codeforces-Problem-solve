
#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char str[52];
        cin>>str;
      int len=strlen(str);
        int count=0;
       for(int i=0;i<len;i++){
            if(str[i]=='1')
            count++;
         }
         cout<< count << endl;
    }
    return 0;
}