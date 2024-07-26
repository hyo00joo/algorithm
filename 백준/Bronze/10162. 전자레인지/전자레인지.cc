#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    if (t % 10 != 0) {
        cout << -1;
        return 0;
    }

    int a = 0, b = 0, c = 0;
    while (t >= 1) {
        if (t >= 300) {
            t -= 300;
            a++;
        } else if (t >= 60) {
            t -= 60;
            b++;
        } else {
            t -= 10;
            c++;
        }
    }
    cout << a << ' ' << b << ' ' << c;
}