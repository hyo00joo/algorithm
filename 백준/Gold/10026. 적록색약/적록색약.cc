// baekjoon 1012

#include <algorithm>
#include <iostream>
#include <queue>
#define X first
#define Y second

using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    int sl[t][t];
    int ss[t][t];
    for (int i = 0; i < t; i++) {
        getline(cin, s);
        for (int j = 0; j < t; j++) {
            if (s[j] == 'B') {
                ss[i][j] = 'B';
                sl[i][j] = 0; }
            if (s[j] == 'R'){
                ss[i][j] = 'R';
                sl[i][j] = 1;}
            if (s[j] == 'G'){
                ss[i][j] = 'G';
                sl[i][j] = -1;}
        }
    }
    int vis[t][t];
    fill(&vis[0][0], &vis[0][0] + t * t, 0);
    int cnt = 0;
    queue<pair<int, int> > q;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (vis[i][j])
                continue;
            q.push(make_pair(i, j));
            int cc = sl[i][j];
            cnt++;
            vis[i][j] = 1;
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                for (int k = 0; k < 4; k++) {
                    int cx = cur.X + dx[k];
                    int cy = cur.Y + dy[k];
                    if (cx < 0 || cx >= t || cy < 0 || cy >= t)
                        continue;
                    if (sl[cx][cy] != cc || vis[cx][cy])
                        continue;
                    q.push(make_pair(cx, cy));
                    vis[cx][cy] = 1;
                }
            }
        }
    }

    cout << cnt << "\n";
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (ss[i][j] == 'B')
                sl[i][j] = 0;
            if (ss[i][j] == 'R')
                sl[i][j] = 1;
            if (ss[i][j] == 'G')
                sl[i][j] = 1;
        }
    }

    
    int vis2[t][t];
    fill(&vis2[0][0], &vis2[0][0] + t * t, 0);
    int cnt2 = 0;
    queue<pair<int, int> > q2;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (vis2[i][j])
                continue;
            q2.push(make_pair(i, j));
            int cc = sl[i][j];
            cnt2++;
            vis2[i][j] = 1;
            while (!q2.empty()) {
                pair<int, int> cur = q2.front();
                q2.pop();
                for (int k = 0; k < 4; k++) {
                    int cx = cur.X + dx[k];
                    int cy = cur.Y + dy[k];
                    if (cx < 0 || cx >= t || cy < 0 || cy >= t)
                        continue;
                    if (sl[cx][cy] != cc || vis2[cx][cy])
                        continue;
                    q2.push(make_pair(cx, cy));
                    vis2[cx][cy] = 1;
                }
            }
        }
    }
        cout << cnt2;
}
