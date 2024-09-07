// baekjoon 7569

#include <algorithm>
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int dx[6] = { 0, 0, 1, -1, 0, 0 };
int dy[6] = { 1, -1, 0, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int toma[x][y][z];
    int day[x][y][z];
    queue<tuple<int, int, int>> q;
    int cnt = 0;
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++) {
                cin >> toma[k][j][i];
                if (toma[k][j][i] == 1) {
                    day[k][j][i] = 0;
                    q.push({ k, j, i });
                    cnt++;
                }
                if(toma[k][j][i] == 0)
                day[k][j][i] = -1;
            }
        }
    }
    
    if(cnt == x*y*z) {
        cout << "0";
        return 0;
    }
    int res = 0;
    while (!q.empty()) {
        tuple<int, int, int> cur = q.front();
        q.pop();
        int X, Y, Z;
        tie(X, Y, Z) = cur;
        for (int l = 0; l < 6; l++) {
            int cx = X + dx[l];
            int cy = Y + dy[l];
            int cz = Z + dz[l];
            if (cx < 0 || cx >= x || cy < 0 || cy >= y || cz < 0 || cz >= z)
                continue;
            if (day[cx][cy][cz] != -1)
                continue;
            q.push({ cx, cy, cz });
            day[cx][cy][cz] = day[X][Y][Z] + 1;
            toma[cx][cy][cz] = 1;
            res = max(day[cx][cy][cz], res);
       }
    }
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++) {
                if (toma[k][j][i] == 0) {
                    cout << "-1";
                    return 0;
                }
            }
        }
    }
    cout << res;
}
