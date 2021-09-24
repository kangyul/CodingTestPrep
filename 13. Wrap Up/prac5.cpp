#include <bits/stdc++.h>

using namespace std;

int arr[55][55];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int DFS(int x, int y) {
    if(arr[x][y] == 0 || x<0 || y<0) return 0;
    arr[x][y] = 0;
    for(int i=0; i<4; i++) {
        DFS(x+dx[i], y+dy[i]);
    }
    return 1;
}

void Solve() {
    int ans = 0;

    int M, N, K;;
    cin >> M >> N >> K;

    // 초기화
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
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
            ans += DFS(i, j);
        }
    }

    cout << ans << '\n';

}

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        Solve();
    }

    return 0;
}