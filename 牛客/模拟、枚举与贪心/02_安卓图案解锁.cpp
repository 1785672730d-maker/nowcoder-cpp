#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[10][10] = {};

    a[1][3] = a[3][1] = 2;
    a[1][7] = a[7][1] = 4;
    a[3][9] = a[9][3] = 6;
    a[7][9] = a[9][7] = 8;
    a[1][9] = a[9][1] = 5;
    a[3][7] = a[7][3] = 5;
    a[2][8] = a[8][2] = 5;
    a[4][6] = a[6][4] = 5;

    string s;
    while (cin >> s) {
        int vis[10] = {};
        bool ok = true;

        for (int i = 0; i < s.size(); i++) {
            int x = s[i] - '0';

            if (vis[x] == 1) {
                ok = false;
                break;
            }

            if (i > 0) {
                int y = s[i - 1] - '0';

                if (a[y][x] != 0 && vis[a[y][x]] == 0) {
                    ok = false;
                    break;
                }
            }

            vis[x] = 1;
        }

        if (ok == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
