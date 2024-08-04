// baekjoon 10989

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    
    const int Max = 10000;
    int arr[Max + 1] = {0};
    int n, m;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        arr[m]++;

    }

    

    for (int i = 1; i <= Max; i++) {
        for(int j = 0; j < arr[i]; j++) {
            cout << i << "\n";

    }
    }
    return 0;
}