#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> m = {{'a', 1}, {'c', 3},
                       {'b', 4}, {'d', 2}};
    char key = 'b';

    // Search the given key
    auto it = m.equal_range(key);

    // Checking given key is Present or not
    if (it.first != m.end() && it.first->first == key)
        cout << it.first->second;
    else
        cout << key << " is NOT Present";
    return 0;
}
