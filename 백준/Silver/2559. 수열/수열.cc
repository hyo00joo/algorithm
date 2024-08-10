// baekjoon 2559
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ptr1 = 0;
    int ptr2 = m;
    int v2[n];
    v2[0] = v[0];
    for (int i = 1; i < n; i++) {
        v2[i] = v2[i - 1] + v[i];
    }
    int sum = v2[m-1];
    int max = v2[m-1];
    for(int i = m-1; ptr2 < n; i++) {
        sum = v2[i] - v2[ptr1] + v[ptr2];
        ptr1++;
        ptr2++;
        if(max < sum) {
            max = sum;
        }
    }
    cout << max;
}
