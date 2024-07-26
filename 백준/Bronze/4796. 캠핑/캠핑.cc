#include <iostream>

using namespace std;

int main() {
    int L, P, V;
    int i = 1;
    while (1) {
        cin >> L >> P >> V;
        if (L + P + V == 0) break;

        int ans = 0;
        ans += (V / P) * L;
        ans += (V % P > L ? L : V % P);

        cout << "Case " << i++ << ": " << ans << '\n';
    }
}