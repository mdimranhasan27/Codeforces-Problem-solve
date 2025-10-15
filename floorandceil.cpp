//~imran~

 #include<bits/stdc++.h>
 using namespace std;
 int T,x,y,n,m;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>T;
    while(T--){

         cin>>x>>n>>m;y=x;
         m=min(m,30);n=min(n,30);
         for(int i=1;i<=n;i++)x/=2;
         for(int i=1;i<=m;i++)x=(x+1)/2;
         for(int i=1;i<=m;i++)y=(y+1)/2;
         for(int i=1;i<=n;i++)y/=2;
         cout<<y<<" "<<x<<"\n";
     }
    return 0;
}