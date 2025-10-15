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
    int n , m , p , q;
    cin >> n >> m >> p >> q;
    if(n%p==0 && (n/p)*q!=m) 
      cout<< "NO\n";
     else
      cout<<"YES\n"; 
    }
    return 0;
}