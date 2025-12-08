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
    int n;
    cin>>n;
    vector<int>V;
    vector<int>P(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;V.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>P[i];
    }
    int cnt=0,j=0;
    for(int i=0;i<n;i++){
        if(V[i]>P[i]){
            cnt++;
            V.insert(V.begin()+j,P[i]);
            j++;
        }
    }
    cout<<cnt<<"\n";

    }
    return 0;
}