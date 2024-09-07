// baekjoon 7562

#include <algorithm>
#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;

int dx[8] = { 2, 2, -2, -2, 1, 1, -1, -1 };
int dy[8] = { 1, -1, -1, 1, 2, -2, -2, 2 };


int main()
{
    int t, l, n, m;
    cin >> t;

    while (t--) {
        queue<pair<int, int>> q;
        cin >> l;
        int vis[l][l];
        cin >> n >> m;
        q.push({ n, m });
        fill(&vis[0][0], &vis[0][0] + l * l, -1);
        vis[n][m] = 0;
        cin >> n >> m;
        bool end = false;
        if (q.front().X == n && q.front().Y == m) {
            cout << "0" << "\n";
            continue;;
        }
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            for (int i = 0; i < 8; i++) {
                int cx = cur.X + dx[i];
                int cy = cur.Y + dy[i];
                if (cx < 0 || cx >= l || cy < 0 || cy >= l)
                    continue;
                if (vis[cx][cy] != -1)
                    continue;
                q.push({ cx, cy });
                vis[cx][cy] = vis[cur.X][cur.Y] + 1;
                if (cx == n && cy == m) {
                    cout << vis[cx][cy] << "\n";
                    break;
                }
            }
        }
    }
}
