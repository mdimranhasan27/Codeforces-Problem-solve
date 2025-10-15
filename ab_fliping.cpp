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
    int n,cnt=0,ct; string s;
    cin>>n>>s;
    ct=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            break;
        }
        cnt++;
    }
    for(int i=n-1;i>0;i--){
        if(s[i]=='B'){
            break;
        }
        ct--;
    }
    cout<<(ct > cnt ? ct - cnt : 0)<<"\n";
    }
    
    return 0;
}