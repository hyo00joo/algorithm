// baekjoon 11728
// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int>arr3(n+m);
    int ptr1 = 0;
    int ptr2 = 0;
    int idx = 0;
    for (; ptr1 < n && ptr2 < m;) {
        if (arr1[ptr1] < arr2[ptr2]) {
            arr3[idx++] = arr1[ptr1++];
        } else {
            arr3[idx++] = arr2[ptr2++];
        }
    }
    while(ptr1 < n) {
        arr3[idx++] = arr1[ptr1++];
    }
    while(ptr2 < m) {
        arr3[idx++] = arr2[ptr2++];
    }
    for (auto& a : arr3) {
        cout << a << " ";
    }
}
