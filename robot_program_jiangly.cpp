#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
    int n, x;
    i64 k;
    std::cin >> n >> x >> k;
    
    std::string s;
    std::cin >> s;
    
    int p = 0;
    int len = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'L') {
            p--;
        } else {
            p++;
        }
        if (p == 0) {
            len = i;
            break;
        }
    }
    
    p = x;
    i64 ans = 0;
    for (int i = 1; i <= n && k; i++) {
        k--;
        if (s[i - 1] == 'L') {
            p--;
        } else {
            p++;
        }
        if (p == 0) {
            ans++;
            break;
        }
    }
    if (ans && len) {
        ans += k / len;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}