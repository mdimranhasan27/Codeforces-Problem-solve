//~imran~

#include <bits/stdc++.h>
using namespace std;
 int findhighestfrequency(const vector<int>&b){
    unordered_map<int,int>count;
    int maxFreq=0;
    int maxElem=0;
    for(int num:b){
        if(num!=0)
        count[num]++;
        if(count[num]>maxFreq){
            maxFreq=count[num];
            maxElem=num;

        }
    }
    return maxElem;
 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=__gcd(abs(arr[i]-i),ans);
    }
    cout<<ans<<"\n";
}
    return 0;
}