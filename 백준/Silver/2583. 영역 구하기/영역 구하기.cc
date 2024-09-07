// baekjoon 2583

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define X first
#define Y second
using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main()
{
    int m, n, k;
    int a, b, c, d;
    cin >> m >> n >> k;
    int board[n][m];
    fill(&board[0][0], &board[0][0] + n*m, 1);
    for(int i = 0; i < k; i++) {
        cin >> a >> b >> c >> d;
        for(int j = a; j < c; j++) {
            for(int k = b; k < d; k++) {
                if(board[j][k] != 0)
                board[j][k] = 0;
            }
        }
    }
    int vis[n][m];
    fill(&vis[0][0], &vis[0][0] + n*m, 0);
    queue<pair<int, int> > q;
    vector<int> re;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!vis[i][j] && board[i][j] == 1) {
                q.push({i, j});
                cnt++;
                vis[i][j] = 1;
            }
            int area = 0;
            while(!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                area ++;
                for(int k = 0; k < 4; k++) {
                    int cx = cur.X + dx[k];
                    int cy = cur.Y + dy[k];
                    if(cx < 0 || cx >= n || cy  < 0 || cy >= m) continue;
                    if(vis[cx][cy] || !board[cx][cy]) continue;
                    q.push({cx, cy});
                    vis[cx][cy] = 1;
                }
            }
            if(area != 0) re.push_back(area);
        }
    }
    cout << cnt << "\n";
    sort(re.begin(), re.end());
    for(auto & a : re) cout << a << " ";
}