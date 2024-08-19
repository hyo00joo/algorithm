// baekjoon 1874
// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    stack<int> nums;
    vector<string> result;
    int crt = 1;

    for (int i = 0; i < n; i++) {
        int trg;
        cin >> trg;
        while (trg >= crt) {
            nums.push(crt++);
            result.push_back("+");
        }
        if (nums.top() == trg) {
            nums.pop();
            result.push_back("-");
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    for (auto& a : result)
        cout << a << "\n";
}