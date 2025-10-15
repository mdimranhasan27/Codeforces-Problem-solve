#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        int a,freq[1005]={0};  
        for (int i = 1; i <=n; i++) {
            cin >> a;
            freq[a]++;
        }
        int flag=0;
        for(int i=1;i<=n;i++){
            if(freq[i]>2){
               
               freq[i+1]+=freq[i]-2;
            }
            if(freq[i]==1){
                flag=1;
                break;
            }
        }
         if (flag) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}