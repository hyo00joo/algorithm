// baekjoon 2003
// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ptr1 = 0;
    int ptr2 = 0;
    int arr2[n];
    arr2[0] = arr[0];
    for (int i = 1; i < n; i++) {
        arr2[i] = arr2[i - 1] + arr[i];
    }
    int sum = arr2[0];
    int cnt = 0;
    while (ptr2 < n) {
        if (sum < m) {
            ptr2++;
            sum = arr2[ptr2];
            if (ptr1 != 0)
                ptr1 = 0;
        }
        if (sum > m) {
            sum = arr2[ptr2] - arr2[ptr1++];
        }
        if (sum == m) {
            cnt++;
            ptr2++;
            ptr1 = 0;
            sum = arr2[ptr2];
        }
        
    }
    cout << cnt;
}
