
/*" بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ -In the name of Allah."
    "Never stop chasing!-MD.SOURAV."
*/

#include       <bits/stdc++.h>
#include       <ext/pb_ds/assoc_container.hpp>
#include       <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


#define        F first
#define        S second
#define        endl "\n"
#define        int long long int
#define        pb push_back
#define        bitCount(x) __builtin_popcount(x)
#define        imax  INT_MAX
#define        imin  INT_MIN;
#define        lmax  LLONG_MAX;
#define        lmin  LLONG_MIN;
// for ordered_set and ordered_multiset
// it return an iterator pointing to the xth element
#define        value_of(x) find_by_order(x)
// it will return the number of items that are strictly less than x
#define        smaller_of(x) order_of_key(x)
#define        MOD 1000000007
#define        gcd(a, b) __gcd(a, b)
#define        all(v) v.begin(),v.end()
#define        oset ordered_set
#define        omset ordered_multiset
#define        mxpq priority_queue<int>
#define        mnpq priority_queue<int, vector<int>, greater<int>>
#define        mxpqp mxheap2 priority_queue<pair<int,int>>
#define        mnpqp priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>
#define        mp(x, y) make_pair(x, y)
#define        lcd(a, b) (a * b) / gcd(a, b)


#ifndef        ONLINE_JUDGE
#define        deb(args...){string _s = #args;replace(_s.begin(), _s.end(), ',', ' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it, args);cout<<endl;}
#else 
#define        deb(args...)
#endif
using namespace std;


template <typename T>using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>ostream &operator<<(ostream &os, const vector<T> &v) {os << '{'; for (const auto &x : v)os << " " << x; return os << '}';}
void err(istream_iterator<string> it) {} template <typename T, typename... Args>void err(istream_iterator<string> it, T a, Args... args) {cerr << *it << " = " << a << " "; err(++it, args...);}
void err2(istream_iterator<string> it) {} template <typename T, typename... Args>void err2(istream_iterator<string> it, T a, Args... args) {cerr << *it << " = " << a << endl; err(++it, args...);}

template<typename T, typename S> ostream& operator<<(ostream& os, const pair<T, S>& p) {os << p.first << ' ' << p.second; return os;}

/*---------------------------------------------------------------------------------------------------------------------------*/
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) {return uniform_int_distribution<int>(l, r)(rng);}
/*--------------------------------------------------------------------------------------------------------------------------*/


int dx[] = { -1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
    int a, b, c;
};

bool cmp(node &x, node &y){
    if(x.a < y.a) return true;
    if(x.a == y.a){
        return x.b < y.b;
    }
    return false;

}
void solve()
{
    vector<int> v={4,7,8,2,1,3,4,0,5,6};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
}


int32_t main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test_case ;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        //cout << "Case " << i << ": ";
        solve();

    }

    return 0;
}

