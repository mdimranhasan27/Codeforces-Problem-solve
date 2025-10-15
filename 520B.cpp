//~imran~

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m){
    int cnt=0;
    while(n<m){
        if(m%2==0){ 
        m/=2;
        cnt++;
        }
        else
        {
        m+=1;
        cnt++;
        }
        }
        return cnt+(n-m);

   }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    if(n>=m)
    cout<<abs(n-m);
    else
    {
     int cnt=solve(n,m);
     cout<<cnt;
    }
    
    return 0;
}