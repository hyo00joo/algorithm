// baekjoon 11004

//You must write a problem number like the one above to run the test cases.
//Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);


    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(&arr[0], &arr[n]);

    cout << arr[k-1];

}