//~imran~

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        set<string> words; 
        string line, word;
        getline(cin, line); 
        
        stringstream ss(line); 
        while (ss >> word) {
            words.insert(word); 
        }
    
        cout << words.size() << endl;
    


    }
    return 0;
}