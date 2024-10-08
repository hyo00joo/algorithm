// baekjoon 1012

#include <algorithm>
#include <cctype>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define X first
#define Y second

using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main()
{
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        int ba[n][m];
        int vis[n][m];
        fill(&ba[0][0], &ba[0][0] + n * m, 0);
        fill(&vis[0][0], &vis[0][0] + n * m, 0);
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            ba[a][b] = 1;
        }
        queue<pair<int, int>> q;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ba[i][j] && !vis[i][j]) {
                    cnt++;
                    q.push({ i, j });
                    vis[i][j] = 1;
                    while (!q.empty()) {
                        pair<int, int> cur = q.front();
                        q.pop();
                        for (int a = 0; a < 4; a++) {
                            int cx = cur.X + dx[a];
                            int cy = cur.Y + dy[a];
                            if (cx < 0 || cx >= n || cy < 0 || cy >= m)
                                continue;
                            if (vis[cx][cy] || !ba[cx][cy])
                                continue;
                            vis[cx][cy] = 1;
                            q.push({ cx, cy });
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}
