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
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int max=0;
    for(int j=0;j<n-2;j++){
      int x = b[j]-a[j+1]+b[j+1];
      b[j+1]=x;
      if(x>max) max=x;
    }
    vector<int> V=b;
     V.push_back(max);
    int maxValue = *max_element(V.begin(), V.end());
    cout <<  maxValue ;
     return 0;
}