  
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

    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0){
            cout << (n+k-2) /(k-1) << "\n";// k--;  (n+k-1)/k;
            
        }
        else{
            n-=k;
            cout << ((n+k-2) / (k-1))+1 << "\n";// k-- ;(n+k-1)/k;
        }
    }
    return 0;
}

/*today i learned a new thing . ceil div . (n+k-1)/k . here this formula k have to remain same . in integer div n/k (floor div ). it will produce ouput 12/5=2.but this same thing in ceil div 12/5=3; round up ;*/
