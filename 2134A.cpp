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
    int n,a,b;
    cin>> n >> a >> b;
    if(b>a && (n-b)%2==0)
    cout << "YES\n";
    else if ((n-a)%2==0 && (n-b)%2==0)
    cout << "YES\n";
    else
    cout << "NO\n";
    }
    return 0;
}