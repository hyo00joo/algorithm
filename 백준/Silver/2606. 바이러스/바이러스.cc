// baekjoon 2606
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define first X
#define second Y
// template <typename T>

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> dist(n + 1, vector<int>());
    vector<int> visit(n + 1, 0);
    queue<int> q;
    int a, b;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        dist[a].push_back(b);
        dist[b].push_back(a);
    }
    int cnt = 0;
    q.push(1);
    visit[1] = 1;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cnt++;

        for (int nei : dist[cur]) {
                 if (visit[nei]> 0)
                     continue;
                 visit[nei] = 1;
                 q.push(nei);
                 
             }
    }
    cout << cnt -1 ;
}