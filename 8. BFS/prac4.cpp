#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;
bool visited[maxn][maxn];
int arr[maxn][maxn];
int dist[maxn][maxn];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int M, N;

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(arr[i][j] == 1) {
                visited[i][j] = true;
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }
    while(!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            int nx = x1 + dx[i];
            int ny = y1 + dy[i];

            if(nx>=0 && nx<N && ny>=0 && ny<M && !visited[nx][ny] && arr[nx][ny] == 0) {
                visited[nx][ny] = true;
                q.push({nx, ny});
                dist[nx][ny] = dist[x1][y1] + 1;
            }
        }
    }
}

int main(void) {
    
    cin >> M >> N;
    int x1, y1;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int x;
            cin >> x;
            arr[i][j] = x;
            if(x == 1) {
                x1 = i; 
                y1 = j;
            } 
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            dist[i][j] = -1;
        }
    }

    bfs(x1, y1);
    int max = -1;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(dist[i][j] > max) max = dist[i][j];
            if(dist[i][j] == -1 && arr[i][j] == 0) {
                cout << "-1" << '\n';
                return 0;
            }
        }
    }

    cout << max << '\n';

    return 0;
}