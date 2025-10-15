//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool all_equal(const std::vector<int>& v) {
    if (v.empty()) return true; // or false, depending on your requirement

    for (int val : v) {
        if (val != v[0]) return false;
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n ;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    if(all_equal(v)){
    cout<<"NO\n";
    continue;
    }
    int f=0;
    while(f==0){
    for(int i=0;i<n-2;i++)
    if(v[i]+v[i+1]==v[i+2])
        {
        swap(v[i+1],v[i+2]);
        }
    }

}
    return 0;
}