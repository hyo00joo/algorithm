// baekjoon 24511
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int SorQ[n];
    int k;
    for (int i = 0; i < n; i++)
        cin >> SorQ[i];
    stack<int> st;
    queue<int> qu;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (SorQ[i] == 0) 
            st.push(k);
    }
    int m, l;
    cin >> m;
    while (!st.empty()) {
        qu.push(st.top());
        st.pop();
    }
    for (int i = 0; i < m; i++) {
        cin >> l;
        qu.push(l);
    }

    while (m--) {
        cout << qu.front() << " ";
        qu.pop();
    }
}
