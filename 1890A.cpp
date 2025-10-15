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
    int n ;
     cin>> n;

     vector<int>a(n);
     set<int>s;
     map<int,int>freq;
     for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        freq[a[i]]++;
     }
     if(s.size()==1){
        cout<<"YES"<<"\n";
     }
        else if (s.size()==2){
            auto it = s.begin();

            int val1 = *it;
            ++it;
            int val2= *it;
            if(freq[val1]-freq[val2]==0||freq[val1]-freq[val2]==1||
                freq[val1]-freq[val2]==-1)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}