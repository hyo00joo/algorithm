// baekjoon 1697

#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int dsit[100001];

int main()
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);
    fill(dsit, dsit + 100001, -1);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    q.push(n);
    dsit[n] = 0;
    while (dsit[k] == -1) {
        int cr = q.front();
        q.pop();
        for (int nxt : { cr + 1, cr - 1, 2 * cr }) {
            if (nxt < 0 || nxt > 100000 || dsit[nxt] != -1)
                continue;
            q.push(nxt);
            dsit[nxt] = dsit[cr]+1;
        }
    }
    cout << dsit[k];
}
