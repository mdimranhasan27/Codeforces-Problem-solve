//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    /*for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                //swap(a[j], a[j+1]);

            }
        }
    }*/
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                //swap(a[j], a[j+1]);

            }
        }

   /*for(int k=1;k<=n-1;k++){
    int ptr=1;
    while(ptr<=n-k){
        if(a[ptr]>a[ptr+1])
        swap(a[ptr],a[ptr+1]);
        ptr++;
    }*/

   }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
   /* for(int x:a){
        cout<<x<<" ";
    }*/
     
    return 0;
}