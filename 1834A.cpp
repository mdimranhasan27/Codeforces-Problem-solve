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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int neg=0,pos=0;
    for(int i=0;i<n;i++){
        if(v[i]<0)neg++;
        else pos++;
    }
    /*if(pos==n) cout<<"0\n";
    else if(neg==n && n%2!=0) cout<<n<<"\n";*/
    int x=0;
    if(pos<neg) x=neg-pos;
    if

    }
    return 0;
}