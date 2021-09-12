#include<bits/stdc++.h>

using namespace std;

long long dp[1004][1004];
const int mod = 1e9 + 7;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;

    // 기저조건
    dp[1][1] = 1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(i!=1 || j!=1) {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1]) % mod;
            }
        }
    }

    cout << dp[n][m] << '\n';

    return 0;
}