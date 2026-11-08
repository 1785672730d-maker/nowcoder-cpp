#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' || s.substr(i, 4) == "zero") {
                cout << 0;
            }
            else if (s[i] == '2' || s.substr(i, 3) == "two") {
                cout << 2;
            }
            else if (s[i] == '4' || s.substr(i, 4) == "four") {
                cout << 4;
            }
            else if (s[i] == '6' || s.substr(i, 3) == "six") {
                cout << 6;
            }
            else if (s[i] == '9' || s.substr(i, 4) == "nine") {
                cout << 9;
            }
        }

        cout << endl;
    }

    return 0;
}
