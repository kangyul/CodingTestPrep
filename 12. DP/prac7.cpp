// 백준 20500번  
// Ezreal 여눈부터 가네 ㅈㅈ

#include <bits/stdc++.h>

using namespace std;

int DP0[1520];
int DP1[1520];
int DP2[1520];

const int mod = 1e9 + 7;

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N;
    cin >> N;

    // 초기 조건
    DP0[1] = 0;
    DP1[1] = 1;
    DP2[1] = 1;

    for(int i=2; i<=N; i++) {
        DP0[i] = (DP1[i-1] + DP2[i-1]) % mod;
        DP1[i] = (DP0[i-1] + DP2[i-1]) % mod;
        DP2[i] = (DP0[i-1] + DP1[i-1]) % mod;
    }

    int ans = (DP0[N] / 2);

    cout << DP0[N]/2 << '\n';

    return 0;
}