// baekjoon 10989

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    

    int n, m;

    cin >> n;
    int arr[10001] = {0};
    for(int i = 0; i < n; i++) {
        cin >> m;
        arr[m]++;
    }

    

    for (int i = 1; i < 10001; i++) {
        for(int j = arr[i]; j > 0; j--) {
            cout << i << "\n";

    }
    }
    return 0;
}