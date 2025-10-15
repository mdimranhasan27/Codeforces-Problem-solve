//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n,x=0,y=0,cnt=0;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<n-1;i++){
    if(s[i]=='R') x++;
    else y++;
    if(s[i]==s[i+1]&&x==y) cnt++;
   }
  
   cout<<cnt;
   return 0;
}