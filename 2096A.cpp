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
    int n , x,y=1;
    cin >> n;
    x = n;
    string f;
    cin >> f;
    vector<int> s;
    for(int i = n-2; i >= 0; i--){
        if(f[i] =='<'){
        s.push_back(y);
        y++;

        }
        else{
        s.push_back(x);
        x--;
        }
    }
    s.push_back(y);
    //int z=(x+y)/2;
   // cout << z <<" ";
    reverse(s.begin(),s.end());
    for(int d:s){
        cout<< d << " ";
    }
    cout<<"\n";
    }
    return 0;
}