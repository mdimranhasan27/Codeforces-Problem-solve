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
        
            long long n;
            cin >> n;
            
            long long k = log(n) / log(2);
            float f = log(n) / log(2);
            
            if (f > k) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }

    }
    return 0;
}