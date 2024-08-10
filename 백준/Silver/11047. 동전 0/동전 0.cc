// baekjoon 11047
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    int m;
    vector<int> coin(n);
    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    int cnt = 0;
    for(int i = n-1; i >=0; i--) {
        cnt += k/coin[i];
        k = k%coin[i];
    }
    cout << cnt;

}