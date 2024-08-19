// baekjoon 18870
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare1(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
bool compare2(pair<int, int>& a, pair<int, int>& b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<pair<int, int>> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i].first;
        nums[i].second = i;
    }
    sort(nums.begin(), nums.end(), compare1);
    int k = nums[0].first;
    int l = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i].first > k) {
            k = nums[i].first;
            nums[i].first = ++l;
        } else
            nums[i].first = l;
    }
    sort(nums.begin(), nums.end(), compare2);
    for (auto& a : nums)
        cout << a.first << " ";
}
