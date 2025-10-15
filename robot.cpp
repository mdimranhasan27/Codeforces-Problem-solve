//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    long long i,j,n,x,k,count=0;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    int p=s.size();
    for(i=0;i<k/p;i++)
       {
        for(j=0;j<s.size();j++){
            if(s[j]=='L')
                --x;
            else
                ++x;

                if(x==0){ 
                    count++;
                    break;
                 }

             }
        }
        cout<<count<<"\n";
    }
    return 0;
}
