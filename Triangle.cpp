//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);

    if( arr[0]+arr[1]>arr[2] ||
        arr[1]+arr[2]>arr[3] ||
        arr[0]+arr[1]>arr[3] )
        cout<<"TRIANGLE\n";
    else if(arr[0]+arr[1]<arr[2] &&
        arr[1]+arr[2]<arr[3] &&
        arr[0]+arr[1]<arr[3])
        cout<<"IMPOSSIBLE\n";
    else
        cout<<"SEGMENT\n";
    return 0;
}