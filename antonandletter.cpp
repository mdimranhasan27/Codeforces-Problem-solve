//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    set<char> st;
    for (char c : str) {
        if (c >= 'a' && c <= 'z')
        st.insert(c);
    }
    cout<<st.size();

    return 0;
}