#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N, k;
    cin >> N >> k;

    int l = 1, r = N*N;

    while(l+1 < r) {
        int m = (l+r)/2;
        int sum = 0;

        for(int i=1; i<=N; i++) {
            sum += min(m/i, N);
        }

        if(sum >= k) r = m;
        else l = m; 
    }

    cout << r << '\n';

    return 0;
}