//~imran~

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    vector<int>v(t);
   float sum=0;
    for(int i=0;i<t;i++){
        cin>>v[i];
        sum+=v[i];

    }
    vector<int>b(t);
    if(sum/t>=4.5)
    cout<<"0";
    else 
      {
       for(int i=0;i<t;i++){
           int x=5-v[i];
           b.push_back(x);
      }
      sort(b.rbegin(),b.rend());
      int i=0,cnt=0;
      while(1){
        sum+=b[i];
        cnt++;
        if(sum/t>=4.5){
         cout<<cnt;
         break;
        }
        i++;
      }
    }
    return 0;
}