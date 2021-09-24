#include <bits/stdc++.h>

using namespace std;

int arr[55][55];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dfs(int x, int y) {
    if(arr[x][y] == 0 || x<0 || y<0) return 0;
    arr[x][y] = 0;
    for(int i=0; i<4; i++) {
        dfs(x+dx[i], y+dy[i]);
    }
    return 1;
}

void testCase() {
    int M, N, K;
    cin >> M >> N >> K;

    int cnt = 0;

    // initialize
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            arr[i][j] = 0;
        }
    }

    // input
    for(int i=0; i<K; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = 1;
    }

    // bfs
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            cnt += dfs(i, j);
        }
    }

    cout << cnt << '\n';

}

int main(void) {

    int T;
    cin >> T;
    while(T--) {
        testCase();
    }

    return 0;
}