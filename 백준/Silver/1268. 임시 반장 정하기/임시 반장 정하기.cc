// baekjoon 1268
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt[n];
    int student[n][5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++)
            cin >> student[i][j];
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 5; k++) {
                if (i == j) break;
                if (student[i][k] == student[j][k]) {
                    cnt[i]++;
                    break;}
            }
        }
    }
    int max_cnt = 0;
    int max = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (max_cnt <= cnt[i]) {
            max_cnt = cnt[i];
            max = i + 1;
        }
    }
    cout << max;
}