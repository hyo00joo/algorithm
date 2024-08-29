// baekjoon 2178

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
    cin >> n >> m;
    int miro[n][m];
    int vis[n][m];
    string p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        for (int j = 0; j < m; j++) {
            miro[i][j] = p[j] - '0';
            vis[i][j] = 0;
        }
    }
    queue<pair<int, int>> q;
    vis[0][0] = 1;
    q.push(make_pair(0, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (vis[nx][ny] || miro[nx][ny] != 1)
                        continue;
                    vis[nx][ny] = 1 + vis[cur.X][cur.Y];
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    cout << vis[n - 1][m - 1] << "\n";
}
