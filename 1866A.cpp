//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>pos;
    int n;
    cin >> n;
    bool zero=false;
     for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        if(c<0) {
            c=c*(-1);
            pos.push_back(c);
        }
        else if(c==0) zero=true;
        else pos.push_back(c);
     }
     if(zero){
        cout<<"0"<<"\n";
     }
     else{
     int m= *min_element(pos.begin(),pos.end());
     cout << m <<endl;
     }
    
    return 0;
}