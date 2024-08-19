// baekjoon 1463
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    int cnt = 0;
    cin >> n;
    vector<int> num(n + 1);
    num[1] = 0;

    for (int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + 1;
        if (i % 2 == 0 && num[i] > num[i / 2] + 1)
            num[i] = num[i / 2] + 1;

        if (i % 3 == 0 && num[i] > num[i / 3] + 1)
            num[i] = num[i / 3] + 1;
    }

    cout << num[n];
}