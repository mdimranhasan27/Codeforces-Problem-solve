//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2')
        count++;
    }
    for(int i=0;i<count;i++)
    cout<<"2";
    
    return 0;
}