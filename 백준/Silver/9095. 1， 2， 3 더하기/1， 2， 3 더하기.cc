// baekjoon 9095
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
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vector<int> num(k + 1);
        num[1] = 1;
        num[2] = 2;
        num[3] = 4;
        for (int i = 4; i <= k; i++) {
            num[i] = num[i-3] + num[i-2] + num[i-1];
        }
        cout << num[k] << "\n";
    }
}