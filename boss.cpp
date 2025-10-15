//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int j=n-1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[j])
            {
                c++;
            }
            else break;
            j--;
            if(i>=j) break;
        }
        cout<<n-2*c<<endl;
    }
    return 0;
}