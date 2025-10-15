#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int T=k-2;
        int a, freq[200005]={0};
        for(int i=1;i<k+1;i++){
            cin>>a;
            freq[a]=1;
        }
        int x,y;
        for(int j=1;j*j<=k;j++){
            if(T%j==0){
                x=j;
                y=T/j;
                if(freq[x]&&freq[y]){
                    cout<<x<<" "<<y<<endl;
                    goto next;
                }
            }
        }
        next:;

    }
    return 0;
}