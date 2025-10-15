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
    vector<int>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    vector<int>v1;
    int k=0;
    for(int i=t-1;i>=0;i--){
        int x=v[i];
        auto it=find(v1.begin(),v1.end(),x);
        if(it==v1.end()){
        v1.insert(v1.end()-k,x);
        k++;
        }
    }
    cout<<v1.size()<<" \n";
    for(auto y : v1)
    cout<< y << " ";
    return 0;
}