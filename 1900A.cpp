//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
        cnt++;
        r++;
        }
        else if(s[i]=='#'&& cnt< 3)
        cnt=0;
      }
    
    if(cnt>=3)
    cout<<"2\n";
    else
    cout<<r<<"\n";
    }
    return 0;
}