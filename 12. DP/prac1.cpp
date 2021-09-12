#include <bits/stdc++.h>

using namespace std;

int dp[100004];
const int inf = 1e9 + 7;

int main(void) {

    int N;
    cin >> N;

    dp[0] = 0;
    dp[1] = dp[3] = inf;
    dp[2] = 1;
    dp[4] = 2;
 
    for(int i=5; i<=N; i++) {
        dp[i] = min(dp[i-2], dp[i-5]) + 1;
    }

    if(dp[N] == inf) cout << "-1" << '\n';
    else cout << dp[N] << '\n';

    return 0;
}