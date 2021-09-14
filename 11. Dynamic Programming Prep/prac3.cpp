#include <bits/stdc++.h>

using namespace std;

int N;
double a[100004];

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;

    for(int i=1; i<=N; i++) cin >> a[i];

    for(int i=2; i<=N; i++) {
        a[i]  = max(a[i], a[i-1]*a[i]);
    }

    printf("%.3lf", *max_element(a+1, a+N+1));

    return 0;
}