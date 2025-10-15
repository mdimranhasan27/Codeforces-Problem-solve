#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int score=0;
        while(r!=1){
            r=r/2;
            score++;
        }
        cout<<score<<endl;
    }
    return 0;
}