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
    vector<string>s(t);
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    vector<string>v;
    for(int i=0;i<t;i++){
        int Count = count(v.begin(), v.end(), s[i]);
        if(Count==0){
            cout<<"OK\n";
            v.push_back(s[i]);
        }
        else{
        cout << s[i]<<Count << "\n";
            v.push_back(s[i]);
        }

    }
    return 0;
}