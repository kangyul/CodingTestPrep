#include <bits/stdc++.h>

using namespace std;

const int maxn = 101;
int arr[maxn][maxn];
bool visited[maxn][maxn];
int cnt[maxn][maxn];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N, M;

void bfs(int x, int y) {
    visited[x][y] = true;
    cnt[x][y]++;
    queue<pair<int, int>> q;
    q.push( {x, y} );
    while(!q.empty()) {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            int nx = xx + dx[i];
            int ny = yy + dy[i];

            if(nx >= 0 && ny >= 0 && nx < N && ny < M && !visited[nx][ny] && arr[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push({nx, ny});
                cnt[nx][ny] = cnt[xx][yy] + 1;
            }
        }

    }

    
}


int main(void) {

    
    cin >> N >> M;
    string str = "";
    for(int i=0; i<N; i++) {
        cin >> str;
        for(int j=0; j<M; j++) {
            arr[i][j] = str[j] - 48;
        }
    }

    bfs(0, 0);

    cout << cnt[N-1][M-1] << '\n';

    return 0;
}