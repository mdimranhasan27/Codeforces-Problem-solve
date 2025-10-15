//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}