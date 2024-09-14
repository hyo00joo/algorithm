// baekjoon 2468
#include <algorithm>
#include <iostream>
#include <queue>
#define X first
#define Y second

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int hei[100] = {0,};
int main()
{

    int N;
    cin >> N;
    int arr[N][N];
    bool area[N][N];
    int level[N][N];
    int cnt;
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (hei[arr[i][j]] == 0) {
                hei[arr[i][j]] = 1;
                for (int k = 0; k < N; k++) {
                    for (int l = 0; l < N; l++) {
                        if (arr[k][l] <= arr[i][j])
                            area[k][l] = false;
                        else {
                            area[k][l] = true;
                        }
                    }
                }
                cnt = 0;
                queue<pair<int, int>> q;
                for (int k = 0; k < N; k++) {
                    for (int l = 0; l < N; l++) {
                        if (area[k][l] == true) {
                            cnt++;
                            q.push({ k, l });
                            while (!q.empty()) {
                                pair<int, int> cur = q.front();
                                q.pop();
                                for (int i = 0; i < 4; i++) {

                                    int cx = cur.X + dx[i];
                                    int cy = cur.Y + dy[i];

                                    if (cx < 0 || cx >= N || cy < 0 || cy >= N)
                                        continue;
                                    if (!area[cx][cy])
                                        continue;
                                    area[cx][cy] = false;
                                    q.push({ cx, cy });
                                }
                            }
                        }
                    }
                }

                res = max(cnt, res);
            }
        }
    }


   cout << (res == 0 ? 1 : res);
}