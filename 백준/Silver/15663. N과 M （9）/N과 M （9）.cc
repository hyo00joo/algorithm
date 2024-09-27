// baekjoon 15663
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define first X
#define second Y
// template <typename T>

int n, m;
int arr[8];
int res[8];
bool exist[8] = { false };

void func(int cur)
{
    if (cur == m) {
        for (int i = 0; i < m; i++)
            cout << res[i] << " ";
        cout << "\n";
        return;
    }

    int prev = 0;
    for (int i = 0; i < n; i++) {
        if (exist[i])
            continue;
        if (prev == arr[i])
            continue;
        exist[i] = true;
        prev = arr[i];
        res[cur] = arr[i];
        func(cur + 1);
        exist[i] = false;
    }
}
int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    func(0);
}