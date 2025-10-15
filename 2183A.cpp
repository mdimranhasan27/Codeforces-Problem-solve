//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,p;
    string str,sr,ff;
    cin>>n>>str>>p>>sr>>ff;
    int j=0;
    for(int i=0;i<p;i++){
        if(ff[i]=='V') 
        {
            str = sr[j]+str;
            j++;
        }
        else
        {
            str =str+sr[j];
            j++;  
        }
    }
    cout<<str<<endl;
    }
    return 0;
}