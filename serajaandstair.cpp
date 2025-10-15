#include <bits/stdc++.h>
using namespace std;
 
#define fr(i,n,m) for (int i = (n) ; i < (m) ; ++ i)
#define rp(i,n,m) for (int i = (n-1) ; i >= (m) ; -- i)
 
int const maxN = 1e5 + 20 , maxB = 5e3 + 20;
int m , b[maxN] , cnt;
bool l[maxB] , r[maxB];
 
int main(){
	cin >> m;
	fr(i,0,m){
		cin >> b[i];
		if (l[b[i]] == 0){
			l[b[i]] = 1;
			cnt ++;
		}
		else if (r[b[i]] == 0){
			r[b[i]] = 1;
			cnt ++;
		}
	}
	sort(b,b+m);
	if (r[b[m-1]]){
		r[b[m-1]] = 0;
		cnt --;
	}
	cout << cnt << '\n';
	fr(i,0,5001){
		if (l[i]) cout << i << ' ';
	}
	rp(i,5001,0){
		if (r[i]) cout << i << ' ';
	}
	return 0;
}