//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
    int n; 
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;

    for(int i=0;i<n&& str1[i]=='0';i++){
        if(str2[i]!='0'){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}