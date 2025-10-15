#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        vector<string>v;
        cin>>v;
        int b1=0,b2=0,a1=0,a2=0;
        for(int i=0;i<v.size();i++){
            if(v[i]=='U'){
                b2++;
            }
            else if(v[i]=='D'){
                b1--;
            }
            else if(v[i]=='R'){
                a2++;
            }
            else
               a1--;
        }
        if((x>=a1 ||x=<a2 ) && (y>=b1 ||y=<b2))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}