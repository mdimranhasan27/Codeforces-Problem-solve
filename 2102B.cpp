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
    int n,mid;
    cin >> n;
    mid = n/2;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        v[i]= abs(x);
    }
    int target=v[0];
    sort(v.begin(),v.end());
    if(target > v[mid])
    cout << "NO\n";
    else
    cout<<"YES\n";

    }
    return 0;
}