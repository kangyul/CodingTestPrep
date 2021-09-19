#include <bits/stdc++.h>

using namespace std;

int dp[1004] = {0, };
int arr[1004] = {0, };

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N;
    cin >> N;

    // 기저 조건
    dp[0] = 1, dp[1] = 1;

    for(int i=2; i<=N; i++) {
        // filling arr 
        for(int j=1; j<=i/2; j++) {
            int num = 2 * dp[i-j] - dp[i-2*j];
            // To prevent Out of Bounds
            if(num > 0) {
                arr[num] = 1;
            }
        }

        int j = 1;

        // finding dp[N]
        while(1) {
            if(arr[j] != 1) {
                dp[i] = j;
                break;
            }
            j++;
        }

        // initializing arr
        fill(arr, arr+1004, 0);
    }

    cout << dp[N] << '\n';

    return 0;
}