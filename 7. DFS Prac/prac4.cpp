#include <bits/stdc++.h>

using namespace std;

bool visited[55][55];

int arr[55][55];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dfs(int x, int y) {
    if(x<0 || y<0 || arr[x][y] == 0) return 0;
    arr[x][y] = 0;
    for(int i=0; i<4; i++) {
        dfs(x+dx[i], y+dy[i]);
    } 
    return 1;
}

void testCase() {
    int M, N, K;
    cin >> M >> N >> K;
    int ans=0;
    
    // 초기화
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            visited[i][j] = false;
            arr[i][j] = 0;
        }
    }
    
    for(int i=0; i<K; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = 1;
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            ans += dfs(i, j);
        }
    }

    cout << ans << '\n';
}

int main(void) {

    int T;
    cin >> T;
    for(int i=0; i<T; i++) testCase();

    return 0;
}