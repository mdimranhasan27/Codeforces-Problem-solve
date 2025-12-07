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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s(v.begin(), v.end());
        int size = s.size();
        if (size == 1){
            cout << v[0] << "\n";
            continue;
        }
        while(true){
            auto it = find(v.begin(), v.end(), size);
            if(it!=v.end()) {
                cout<< size<<"\n";
                break;
            }
            size++;
        }
        
    }
    return 0;
}
