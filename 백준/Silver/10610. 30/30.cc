// baekjoon 10610
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    ios::sync_with_stdio(0);
    string n;
    cin >> n;
    vector<int> nums(n.length());
    int sum = 0;
    bool ten_multiple = false;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0')
            ten_multiple = true;
        sum += n[i] - '0';
    }

    if (sum % 3 == 0 && ten_multiple) {
        for (int i = 0; i < n.length(); i++)
            nums[i] = n[i] - '0';
        sort(nums.begin(), nums.end(), greater<int>());
        for (auto& a : nums)
            cout << a;
    }
    else 
        cout << "-1";
}
