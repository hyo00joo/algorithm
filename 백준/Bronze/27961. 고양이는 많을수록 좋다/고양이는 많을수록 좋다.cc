#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = 1;
    int ans = 1;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    while (a < n) {
        a += a;
        ans++;
    }

    cout << ans;
}