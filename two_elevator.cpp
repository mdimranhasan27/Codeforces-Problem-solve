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
    int a,b,c;
    cin>>a>>b>>c;
     if(c>b)
     b=2*c-b;
    if (a == b) 
     cout << 3 << endl;
    else if (a < b) 
     cout << 1 << endl;
    else 
     cout << 2 << endl;
 
   }
    return 0;
}