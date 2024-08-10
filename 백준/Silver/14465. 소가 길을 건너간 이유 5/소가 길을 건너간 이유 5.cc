// baekjoon 14465
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> blinker(n, 1);
    vector<int> sum1(n);
    int b_number;
    for (int i = 0; i < b; i++) {
        cin >> b_number;
        blinker[b_number - 1] = 0;
    }
    sum1[0] = blinker[0];
    for (int i = 1; i < n; i++) {
        sum1[i] = sum1[i - 1] + blinker[i];
    }
    int sum2;
    int max = 0;
    for (int i = 0; i < n - k + 1; i++) {
        if(i == 0)
            sum2 = sum1[k - 1];
        else {
            sum2 = sum1[i + k - 1] - sum1[i] + blinker[i + k - 1];
        }
        if (max < sum2) {
            max = sum2;
        }
    }
    cout << k - max;
}
