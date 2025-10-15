#include<bits/stdc++.h>
using namespace std;
int check(int n);
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count=check(n);
    }
    return 0;
}
int check(int x){
    int count=0;
    if(x<10){
        int rem=x%10;
        if(rem==7)
        return 0;
        x+=9;
        count++;
        int res=count+check(x);
        return res;

}
}