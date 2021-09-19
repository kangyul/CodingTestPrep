#include <bits/stdc++.h>

using namespace std;

int DP0[33334];
int DP1[33334];
int DP2[33334];

const int mod = 1e9 + 9;

int main(void) {

    int N;
    cin >> N;

    DP0[1] = 0;
    DP1[1] = 1;
    DP2[1] = 1;

    for(int i=2; i<=N; i++) {
        DP0[i] = DP1[i] = DP2[i] = ((DP0[i-1] + DP1[i-1]) % mod + DP2[i-1]) % mod;
    }

    cout << DP0[N] << '\n';

    return 0;
}