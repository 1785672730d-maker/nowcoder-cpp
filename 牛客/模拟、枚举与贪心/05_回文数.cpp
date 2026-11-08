#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[10] = {};
    int sum = 0;
    int cnt = 0;
    int mid = -1;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        sum += a[i];

        if (a[i] % 2 == 1) {
            cnt++;
            mid = i;
        }
    }

    if (cnt > 1) {
        cout << -1 << endl;
        return 0;
    }

    if (sum == 1) {
        cout << mid << endl;
        return 0;
    }

    int first = -1;

    for (int i = 1; i <= 9; i++) {
        if (a[i] >= 2) {
            first = i;
            break;
        }
    }

    if (first == -1) {
        cout << -1 << endl;
        return 0;
    }

    string s = "";

    s += char(first + '0');
    a[first] -= 2;

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < a[i] / 2; j++) {
            s += char(i + '0');
        }
    }

    string ans = s;

    if (mid != -1) {
        ans += char(mid + '0');
    }

    for (int i = (int)s.size() - 1; i >= 0; i--) {
        ans += s[i];
    }

    cout << ans << endl;

    return 0;
}
