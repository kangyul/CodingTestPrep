#include <bits/stdc++.h>

using namespace std;

int arr[100004];
int sum[100004];

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for(int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<N; i++) {
        sum[i+1] = sum[i] + arr[i+1];
    }

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        cout << sum[y] - sum[x-1] << '\n';
    }

    return 0;
}