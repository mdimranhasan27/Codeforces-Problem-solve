//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int count=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0')
       count++;
    }
    if(count==s.size()){
    cout<<count<<"\n";
    continue;
    }
    int firstzero=-1,lastzero=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(firstzero==-1) firstzero=i;
                lastzero=i;
            }
        }
    
    
    
    for(int i=firstzero;i<=lastzero;i++){
        if(s[i]=='1')
        cnt++;
    }
    cout<<cnt<<"\n";

    }

 return 0;
}