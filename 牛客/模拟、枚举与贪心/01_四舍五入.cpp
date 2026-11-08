#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    size_t dotFound = s.find('.');

    if (dotFound == string::npos) {
        cout << s << '\n';
        return 0;
    }

    int dot = static_cast<int>(dotFound);
    int pos = dot + 1;

    while (pos < (int)s.size() && s[pos] < '5') {
        pos++;
    }

    while (pos < (int)s.size() &&
           t > 0 && s[pos] >= '5') {
        t--;

        if (pos == dot + 1) {
            s.erase(dot);

            int j = dot - 1;

            while (j >= 0 && s[j] == '9') {
                s[j] = '0';
                j--;
            }

            if (j >= 0) {
                s[j]++;
            } else {
                s.insert(s.begin(), '1');
            }

            cout << s << '\n';
            return 0;
        }

        s[pos - 1]++;
        s.resize(pos);
        pos--;
    }

    while (s.size() > (size_t)dot + 1 &&
           s.back() == '0') {
        s.pop_back();
    }


    if (s.back() == '.') {
        s.pop_back();
    }

    cout << s << '\n';
    return 0;
}
