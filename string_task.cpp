//~imran~

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c=='y');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string result = "";
    for (char &c : s) c = tolower(c);
    s.erase(remove_if(s.begin(), s.end(), isvowel), s.end());
    for (char c : s) {
        result += '.';
        result += c;
    }

    cout << result;

    return 0;
}
