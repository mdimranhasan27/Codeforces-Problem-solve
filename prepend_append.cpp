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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=n/2, cnt = 0;
    for(int i=0;i <x;i++){
        if(s[i]==s[n-i-1]){
            break;
        }
        cnt++;
    }
    cout<<n-2*cnt<<"\n";
    }
    return 0;
}