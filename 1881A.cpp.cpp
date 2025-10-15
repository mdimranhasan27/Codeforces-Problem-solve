#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;

        string temp = s;
        int count = 0;

        while (count <= 10) {
            if (temp.find(t) != string::npos) {
                cout << count << endl;
                break;
            }
            temp += s;
            count++;
        }

        if (count > 10) {
            cout <<"-1" << endl;
        }
    }

    return 0;
}
