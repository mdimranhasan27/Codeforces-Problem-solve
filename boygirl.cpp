//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    string str;
    cin>>str;
   
    set<char>set(str.begin(),str.end());
    
    int x=set.size();
    if(x%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}