//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<4;i++){
      if(v[i]==v[i-1])
      count++;
    }
    cout<<count;
    
    return 0;
}