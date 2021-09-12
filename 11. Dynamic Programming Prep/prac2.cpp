#include <bits/stdc++.h>

using namespace std;

int arr[1004];
int sum[1004];

void maxSubArray() {

    int N;
    cin >> N;

    for(int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<N; i++) {
        sum[i+1] = sum[i] + arr[i+1];
    }

    int ans = -1000;

    int s = 0;

    for(int i=1; i<=N; i++) {
        for(int j=0; j<i; j++) {
            s = sum[i] - sum[j];
            ans = max(ans, s);
        }
    }

    cout << ans << '\n';

}

int main(void) {

    int T;
    cin >> T;
    while(T--) {
        maxSubArray();
    }

    return 0;
}