//~imran~

#include<bits/stdc++.h>
#define N 100
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m,i,j,r,c,x;
    string a[N];
	cin>>t;
	while(t--){
		cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
		r=0;
   
		for(i=0;i<n;i++){
			x=0;
			for(j=0;j<m;j++)
               if(a[i][j]=='1')
					x++;
			r+=x%2;
		}
		c=0;
		for(j=0;j<m;j++){
			x=0;
			for(i=0;i<n;i++)
             if(a[i][j]=='1')
					x++;
			c+=x%2;
		}
		cout<<max(r,c)<<'\n';
	}
	return 0;
}
