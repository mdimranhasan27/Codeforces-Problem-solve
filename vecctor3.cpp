#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>v={'a','c','b','d','f','e'};
    v.push_back('x');
    cout<<v[3]<<endl;
    cout<<v.at(2)<<endl;
    for(char x:v){
        cout<<x<<" ";
    }
    return 0;

}