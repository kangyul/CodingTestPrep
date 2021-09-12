#include <bits/stdc++.h>

using namespace std;

int dp[100004];
const int inf = 1e9 + 7;

int main(void) {

    int N;
    cin >> N;

    dp[1] = 0;

    for(int i=2; i<=N; i++) {
        int x = (i%3==0) ? dp[i/3] : inf;
        int y = (i%2==0) ? dp[i/2] : inf;
        int z = dp[i-1];
        dp[i] = min({x, y, z}) + 1;
    }
    
    cout << dp[N] << '\n';

    return 0;
}