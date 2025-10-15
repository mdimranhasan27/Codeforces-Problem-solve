#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
   vector<int>v(3);
   for(int i=0;i<3;i++)
   {
      cin>>v[i];
     // cout<<v[i];
   }
   sort(v.begin(),v.end());
   int B1,B2,B3;
   B1=v[0];
   B2=v[1];
   B3=v[2];
   if((B1*B2)==B3)
      cout<<"YES";
   else
      cout<<"NO";
}
int main()
{
	IO
	
	solve();
	

	return 0;
}