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
    int a , b , c;
    cin>> a >> b >> c;
    float avg=(a+b+c)/3.0;
    float ag=(a+b+c)/3;
    if(avg!=ag){
    cout<<"NO\n";
    continue;
    }
    else{
        a = abs(a-ag);
        b = abs(ag-b);
        c = abs(ag-c);
        if(a+b>c)
        cout<<"NO\n";
        else
        cout<<"YES\n";

    }

    }
    return 0;
}