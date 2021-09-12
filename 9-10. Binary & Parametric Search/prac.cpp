#include <bits/stdc++.h>

using namespace std;

int arr[100004];
int sum[100000][100000];

int main(void) {

    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<N; i++) {
        int s = 0;
        for(int j=i; j<N; j++) {
            s += arr[j];
            sum[i][j] = s;
        }
    }

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        cout << sum[x][y] << '\n';
    }


    return 0;
}