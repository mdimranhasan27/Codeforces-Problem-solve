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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i+=k+1){
        int sum=0;
        for(int j=i;j<min(i+k,n);j++){
            sum+=a[j];
        }
        if(sum==0) count++;
    }
    cout<<count<<endl;
    }
    return 0;
}