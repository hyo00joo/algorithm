// baekjoon 12789
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a;
    int crt = 1;
    cin >> n;
    stack<int> line;
    while (n--) {
        cin >> a;
        if(a != crt) line.push(a);
        else crt++;
        while(!line.empty() && line.top()==crt) {
            line.pop();
            crt++;
        }
    }
    if(line.empty()) cout << "Nice";
    else cout << "Sad";
}