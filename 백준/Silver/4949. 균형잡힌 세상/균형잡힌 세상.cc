// baekjoon 4949

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);
    while (true) {
        string a;
        stack<char> sen;
        getline(cin, a);

        if (a == ".")
            break;
        
        bool va = true;
        for (auto c : a) {
            if (c == '(' || c == '[') {
                sen.push(c);
            } else if (c == ')') {
                if (sen.empty() || sen.top() != '(') {
                    va = false;
                    break;
                }
                sen.pop();
            } else if (c == ']') {
                if (sen.empty() || sen.top() != '[') {
                    va = false;
                    break;
                }
                sen.pop();
            }
        }
        if (!sen.empty()) va=false;
        if (va)
            cout << "yes\n";
        else {
            cout << "no\n";
        }
    }
}