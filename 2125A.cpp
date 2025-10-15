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
    string str;
    cin >> str;
    string  tyb;
    int f=0,n=0,t=0;
    for(int i =0; i < str.length(); i++){
        if(str[i]=='F') f++;
        else if(str[i]=='N') n++;
        else if(str[i]=='T') t++;
        else tyb.insert(tyb.begin(), str[i]); 

    }
    tyb.insert(0, f, 'F');
    tyb.insert(0, n, 'N');
    tyb.insert(0, t, 'T');

    cout << tyb <<endl;
    }
    return 0;
}