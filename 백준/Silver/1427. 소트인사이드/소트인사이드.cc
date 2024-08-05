//baekjoon 1427

//You must write a problem number like the one above to run the test cases.
//Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);


    string N;
    cin >> N;

    int n = N.length();
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = N[i] - '0';
    }

    sort(arr, arr+n, greater<int>());

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

}
