#include <bits/stdc++.h>

using namespace std;

int arr[1028][1028];
int sum[1028][1028];

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N, M;
    cin >> N >> M;

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }

    // sum array 채워넣기

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            sum[i+1][j+1]=sum[i][j+1]+sum[i+1][j]-sum[i][j]+arr[i+1][j+1]; 
        }
    }

    // cout sum array

    // for(int i=0; i<N; i++) {
    //     for(int j=0; j<N; j++) {
    //         cout << sum[i+1][j+1];
    //     }
    //     cout << '\n';
    // }

    // cout << '\n';

    for(int i=0; i<M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2 && y1 == y2) {
            cout << arr[x1][y1] << '\n';
            continue;
        }
        int ans = sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];  
        cout << ans << '\n';
    }

    return 0;
}