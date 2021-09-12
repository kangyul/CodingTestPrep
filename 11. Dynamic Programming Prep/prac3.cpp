#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    double arr[N+1];
    double mul[N+1];

    for(int i=1; i<=N; i++) cin >> arr[i];

    mul[0] = 1;

    for(int i=0; i<N; i++) mul[i+1] = mul[i] * arr[i];

    double maxNum = arr[1];

    for(int i=1; i<=N; i++) {
        for(int j=0; j<i; j++) {
            maxNum = max(maxNum, mul[i] / mul[j]);
        }
    }

    printf("%.3lf\n", maxNum);

    return 0;
}