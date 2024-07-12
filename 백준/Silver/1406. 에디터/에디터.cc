#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    list<char> l;

    for (auto i = 0; i < str.length(); ++i) {
        l.push_back(str[i]);
    }

    // list<int>::iterator st = l.begin();

    int n;
    string editor;
    cin >> n;
    auto cur = l.end();
    for (auto i = 0; i < n; i++) {
        cin >> editor;
        if (editor == "L") {
            if (cur != l.begin()) {
                cur--;
            }
        }
        if (editor == "D") {
            if (cur != l.end()) {
                cur++;
            }
        }

        char ch;
        if (editor == "P") {
            cin >> ch;
            l.insert(cur, ch);
        }
        if (editor == "B") {
            if (cur != l.begin()) {
                cur = l.erase(--cur);  // erase the element before current 'cur' and move 'cur' back
            } 
         // erase the element before current 'cur' and move 'cur' back
            
        }
    }

    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
}