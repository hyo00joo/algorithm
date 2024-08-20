// baekjoon 7785
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    unordered_set<string> record;
    int n;
    cin >> n;
    string name;
    string state;
    for(int i = 0; i < n; i++) {
        cin >> name >> state;
        if(state == "enter") 
            record.insert(name);
        else
            record.erase(name);
    }
    vector<string> result(record.begin(), record.end());
    sort(result.begin(), result.end(), greater<string>());
    for(auto& a : result)
        cout << a << " ";
}
