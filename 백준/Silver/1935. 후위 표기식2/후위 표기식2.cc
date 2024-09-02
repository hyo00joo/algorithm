// baekjoon 1935

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include <utility>

using namespace std;

pair<double, double> lp(stack<double>& l)
{
    double a = l.top();
    l.pop();
    double b = l.top();
    l.pop();

    return make_pair(b, a);
}

int main()
{
    int n;
    cin >> n;
    string s;
    double num[n];
    cin >> s;
    stack<double> l;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    double sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '*') {
            pair<double, double> values = lp(l);
            sum = values.first * values.second;
            l.push(sum);
        } else if (s[i] == '/') {
            pair<double, double> values = lp(l);
            sum = values.first / values.second;
            l.push(sum);
        } else if (s[i] == '+') {
            pair<double, double> values = lp(l);
            sum = values.first + values.second;
            l.push(sum);
        } else if (s[i] == '-') {
            pair<double, double> values = lp(l);
            sum = values.first - values.second;
            l.push(sum);
        } else {
            l.push(num[s[i] - 'A']);
        }
    }
    cout << fixed << setprecision(2) << l.top();
}
