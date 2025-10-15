//~imran~

#include <bits/stdc++.h>
using namespace std;


int countPairs(int n, int m) {
    int count = 0;
    for (int a = 0; a * a <= n; ++a) { 
        int b = n - a * a; 
        if (b >= 0 && a + b * b == m) { 
            count++;
        }
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int result = countPairs(n, m);
    cout <<result << endl;
    
    return 0;
}