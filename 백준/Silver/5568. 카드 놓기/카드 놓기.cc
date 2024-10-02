// baekjoon 5568
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
#include <vector>
using namespace std;
#define first X
#define second Y

// template <typename T>

unordered_set<string> s;
vector<int> q;
int n, k;
int arr[10];
int cnt = 0;
bool used[10];

void func(int m) {

    if(m == k) {
        string str = "";
        for(auto a: q) {
            str = str + to_string(a);
        } 
        s.insert(str);
        return;
    }

    for(int i = 0; i < n; i++) {
        if(used[i]) 
            continue;

        q.push_back(arr[i]);
        used[i] = 1;
        func(m+1);
        q.pop_back();
        used[i] = 0;
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    func(0);
    cout << s.size();
}