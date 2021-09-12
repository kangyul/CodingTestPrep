#include <bits/stdc++.h>

using namespace std;

const int infinity = 10000;
const int maxn = 3004;
bool visited[maxn][maxn];
int arr[maxn][maxn];
int dist[maxn][maxn];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    visited[x][y] = true;
    dist[x][y] = 0;
    q.push({x, y});

    while(!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            int nx = x1 + dx[i];
            int ny = y1 + dy[i];

            if(nx>=0&&ny>=0&&nx<n&&ny<m&&!visited[nx][ny]&&arr[nx][ny]!=1) {
                visited[nx][ny] = true;
                q.push({nx, ny});
                dist[nx][ny] = dist[x1][y1] + 1;
            }
        }
    }
}

int main(void) {

    cin >> n >> m;

    int startX, startY;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            dist[i][j] = infinity;
        }
    }

    for(int i=0; i<n; i++) {
        string str;
        cin >> str;
        for(int j=0; j<m; j++) {
            arr[i][j] = str[j] - '0';
            if(arr[i][j]==2) {
                startX = i;
                startY = j;
            }
        }
    }

    bfs(startX, startY);

    int min = 10000;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] > 2) {
                min = (min > dist[i][j]) ? dist[i][j] : min;
            }
        }
    }

    if(min < 10000) {
        cout << "TAK" << '\n';
        cout << min << '\n';
    } else {
        cout << "NIE" << '\n';
    }

    return 0;
}