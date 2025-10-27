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
    vector<string>s(t);
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    for(int j=s.size()-1;j>=0;j--){
        cout<<s[j]<<"\n";
    }
    return 0;
}
