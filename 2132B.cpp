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
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]!=str[i+1]) {
            cout<<"0\n";
            continue;
        }
    }
    }
    return 0;
}