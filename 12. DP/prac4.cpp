#include <bits/stdc++.h>

using namespace std;

long long dp[1000004];
const int mod = 1000000009;

int ans(int x) {
    for(int i=4; i<=x; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
    }
    return dp[x];
}

int main(void) {

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int T;
    cin >> T;

    while(T--) {
        int x;
        cin >> x;
        cout << ans(x) << '\n';
    }

    return 0;
}