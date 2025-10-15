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
    ll a ,b , c , sum=0;
    cin >> a >> b >> c;
    sum = a + b + c;
    if(sum%3 != 0)
        cout << "NO\n";
    else
        {
          ll avg = sum / 3;
          a = abs(avg -a);
          b = abs(avg - b);
          c = abs (avg - c);
          if((a+b) > c)
            cout << "NO\n";
          else
            cout << "YES\n";  
        }
    }
    return 0;
}