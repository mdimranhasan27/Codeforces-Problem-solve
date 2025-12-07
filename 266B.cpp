//~imran~
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin>>n>>t;
    string str;         
    cin>>str;
    for(int i=0;i<t;i++){
        for(int i=0;i<n-1;){
            if(str[i]=='B'&&str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i=i+1;
                //cout<<str<<"\n";
            }
            i++;
        }
    }
    cout<<str;
    return 0;
}