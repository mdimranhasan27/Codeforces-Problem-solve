//~imran~

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int>st;
    int a;
    for(int i=0;i<10;i++){ 
    cin>>a;
    st.insert(a);
    }
   
    for(auto x:st)
    cout<<x<<" ";
    cout<<endl;
    st.insert(45);
    for(auto x:st)
    cout<<x<<" ";

    return 0;


}