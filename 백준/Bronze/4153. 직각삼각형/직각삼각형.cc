#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    int a, b, c;

    while (1) {
        int h = 0;
        int x;
        int y;
        cin >> a >> b >> c;
        if (a + b + c == 0) {
            return 0;
        }
        if (a > b) {
            h = a;
            x = b;
            y = c;
        } else {
            h = b;
            x = a;
            y = c;
        }
        if (h < c) {
            h = c;
            x = a;
            y = b;
        }

        if (x * x + y * y == h * h) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}
