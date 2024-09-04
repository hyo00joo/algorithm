// baekjoon 1431

#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool alpha(char c)
{
    return (c >= 'A' && c <= 'Z');
}
int main()
{
    int n;
    cin >> n;
    vector<string> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end(), [](string a, string b) {
        if (a.length() != b.length()) {
            return a.length() <= b.length();
        }

        int A = 0;
        int B = 0;
        for (int i = 0; i < a.length(); i++) {
            if (!alpha(a[i]))
                A += a[i] - '0';
        }
        for (int i = 0; i < b.length(); i++) {
            if (!alpha(b[i]))
                B += b[i] - '0';
        }

        if (A != B)
            return A < B;

        return a < b;
    });
    for (auto& i : p) {
        cout << i << "\n";
    }
}