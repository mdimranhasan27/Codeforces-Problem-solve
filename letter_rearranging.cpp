//~imran~

#include <bits/stdc++.h>
using namespace std;



int countCommonSuffix(string s1, string s2) {
    int count = 0;
    int i = s1.size() - 1;  
    int j = s2.size() - 1;
    while (i >= 0 && j >= 0 && s1[i] == s2[j]) {
        count++;
        i--;
        j--;
    }

    return count;
}

int main() {
    string s1, s2;
    cin >> s1;
     cin >> s2;
   int commonCount = countCommonSuffix(s1, s2);
    cout<< s1.size()+s2.size()-2*commonCount << endl;

    return 0;
}
