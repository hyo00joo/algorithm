// baekjoon 7576

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>

#define X first
#define Y second

using namespace std;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int main()
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> m >> n;
    int farm[1000][1000];
    int level[1000][1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> farm[i][j];
        }
    }
    queue<pair<int, int> > q;
    pair<int, int> cur;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(farm[i][j] == 0)
                level[i][j] = -1;
            else if (farm[i][j] == 1) {
                q.push(make_pair(i, j));
                level[i][j] = 0;
            }
            
        }
    }
    int res = 0;
    while (!q.empty()) {
        cur = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int cx = cur.X + dx[k];
            int cy = cur.Y + dy[k];
            if (cx < 0 || cx >= n || cy < 0 || cy >= m)
                continue;
            if (level[cx][cy] != -1)
                continue;
            q.push(make_pair(cx, cy));
            level[cx][cy] = level[cur.X][cur.Y] + 1;
            res = max(level[cx][cy], res);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (farm[i][j] == 0 && level[i][j] == -1) {
                cout << "-1";
                return 0;
            }
        }

    }
        cout << res;
}
