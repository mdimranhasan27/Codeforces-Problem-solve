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
    cin >> n;
    if(n%3==0)
    cout << "Second" <<"\n";
    else
    cout << "First" <<"\n";
    }
    return 0;
}