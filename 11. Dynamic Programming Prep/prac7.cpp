#include <bits/stdc++.h>

using namespace std;

int arr[10004];
int sum[10004];

int main(void) {

    int N, M;
    cin >> N >> M;

    for(int i=1; i<=N; i++) cin >> arr[i];

    for(int i=0; i<N; i++) sum[i+1] = sum[i] + arr[i+1];

    int cnt=0;

    for(int i=1; i<=N; i++) {
        
        int low = *lower_bound(sum, sum+N, sum[i]-M);

        if(low == sum[i]-M) cnt++;

    }

    cout << cnt << '\n';

    return 0;
}