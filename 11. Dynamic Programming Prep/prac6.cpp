#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N, M;
    cin >> N >> M;

    int a[N], b[M], ans[N+M];

    for(int i=0; i<N; i++) cin >> a[i];

    for(int i=0; i<M; i++) cin >> b[i];

    int i=0, j=0, k=0;

    while(i<N && j<M) {
        if(a[i] < b[j]) ans[k++] = a[i++];
        else ans[k++] = b[j++];
    }

    while(i<N) ans[k++] = a[i++];
    
    while(j<M) ans[k++] = b[j++];

    for(int i=0; i<N+M; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}