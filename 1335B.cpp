//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int count=0;
        for(int i=0;i<n;i++){
            char c='a';
            for(int j=0;j<b;j++){
                count++;
                cout<<c;
                c++;
                if(count==n) break;
                
            }
            if(count==n) break;
            
        }
        cout<<"\n";
    }
    return 0;
}