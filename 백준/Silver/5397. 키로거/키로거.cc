// baekjoon 5397
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string ori;
    list<char> key;
    list<char>::iterator it;
    while (n--) {
        key.clear();
        cin >> ori;
        it = key.end();
        for (int i = 0; i < ori.length(); i++) {
            if (ori[i] == '>') {
                if (it != key.end()) {
                    it++;
                }
            } else if (ori[i] == '<') {
                if (it != key.begin()) {
                    it--;
                }
            } else if (ori[i] == '-') {
                if (it != key.begin()) {
                    it--;
                    it = key.erase(it);
                }
            } else {
                it = key.insert(it, ori[i]);
                it++;
            }
        }

        for (auto& b : key)
            cout << b;
        cout << endl;
    }
}
