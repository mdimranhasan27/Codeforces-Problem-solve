//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,X;
    cin>>n>>X;
    int arr[60];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    v.push_back(arr[0]);
    for(int i=0;i<n-1;i++){
       
       v.push_back(arr[i+1]-arr[i]);
    }
    v.push_back(2*(X-arr[n-1]));
    auto maxvalue=max_element(v.begin(),v.end());
    cout<<*maxvalue<<"\n";

    }
    return 0;
}