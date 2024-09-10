// baekjoon 10826

#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

pair<char, char> node[26];
int a[26];

void pre(int n)
{
    cout << (char)(n + 'A');
    
    if (node[n].first != '.') {
        pre(node[n].first - 'A');
    }

    if (node[n].second != '.') {
        pre(node[n].second - 'A'); 
    }
}

void mid(int n)
{
    
    if (node[n].first != '.') {
        mid(node[n].first - 'A');
    }
    cout << (char)(n + 'A');

    if (node[n].second != '.') {
        mid(node[n].second - 'A'); 
    }
}
void pro(int n)
{
    if (node[n].first != '.') {
        pro(node[n].first - 'A');
    }

    if (node[n].second != '.') {
        pro(node[n].second - 'A'); 
    }
    cout << (char)(n + 'A');
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char tmp;
        cin >> tmp;
        cin >> node[tmp - 'A'].first >> node[tmp - 'A'].second;
    }

    pre(0); 
    cout << "\n";
    mid(0);
    cout << "\n";
    pro(0);
}