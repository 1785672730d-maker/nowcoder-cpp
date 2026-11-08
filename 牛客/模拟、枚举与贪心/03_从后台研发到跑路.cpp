#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;

    while (cin.get(c)) {
        s += c;
    }

    bool in = false;

    for (int i = 0; i < (int)s.size();) {
        if (s[i] == '"' && (i == 0 || s[i - 1] != '\\')) {
            in = !in;
        }

        if (!in && i + 1 < (int)s.size() &&
            s[i] == '/' && s[i + 1] == '*') {

            int j = i + 2;

            while (j + 1 < (int)s.size()) {
                if (s[j] == '*' && s[j + 1] == '/') {
                    break;
                }
                j++;
            }

            if (j + 1 < (int)s.size()) {
                i = j + 2;
                continue;
            }
        }

        cout << s[i];
        i++;
    }

    return 0;
}
