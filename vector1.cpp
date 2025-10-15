#include<bits/stdc++.h>
/*
#include <iostream>
#include <vector>
#include <algorithm>
*/
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}