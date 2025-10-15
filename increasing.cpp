#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
      }
      sort(v.begin(),v.end());
      int flag=0;
      for(int j=1;j<v.size();j++){
        if(v[j]<=v[j-1])
        {
            flag=1;
            break;
        }
      }
      if(flag)
      cout<<"NO"<<endl;
      else if(n==1)
      cout<<"YES"<<endl;
      else
      cout<<"YES"<<endl;
    }
    return 0;
}