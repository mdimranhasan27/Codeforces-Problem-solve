#include<bits/stdc++.h>
using namespace std;
long long d,i,k,m,n,a[200040];  // Declare global variables

main(){
    for(cin>>n>>m; i<n;i++ ){ // Read 'n' and 'm' and construct prefix sum
        cin>>a[i];
        a[i] += a[i-1]
    }

    for(; m--;){ // Process 'm' queries
        cin >> k;
        d = (lower_bound(a, a + n, k) - a); 
        cout << d << ' ' << k - a[d-1] << endl;
    }// Binary search for the segment
}
