// baekjoon 15652
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int n, m;
int arr[8];
bool num[20] = {
    false,
};

void func(int k, int l)
{

    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = l; i <= n; i++) {

        arr[k] = i;
        func(k + 1, i);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0, 1);
}