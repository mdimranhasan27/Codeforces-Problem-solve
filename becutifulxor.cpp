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
    int a,b;
    cin>>a>>b;
    int x = a ^ b;
    if(a==b) cout<<"0\n";
    else if (x <= a) {
            cout << 1 << "\n" << x << "\n";
        }
    else if(b<a){
        
            cout << 2 << "\n" << b << " " << a << "\n";
        }
    else cout<<"-1\n";
       
    }

    return 0;
}