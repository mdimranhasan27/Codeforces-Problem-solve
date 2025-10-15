//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            if((abs(a[i]-b[j]))<=k){
                count++;
                break;
                
            }
        }
    }
    cout<<count;

    return 0;
}