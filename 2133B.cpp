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
    ll n,sum=0;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n;i+=2){
        sum+=arr[i];
    }
    cout << sum << endl;

    }
    return 0;
}