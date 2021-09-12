#include <bits/stdc++.h>

using namespace std;

int arr[1000004];

int main(void) {

    int N, M;
    cin >> N >> M;
    int maxNum = 0;

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        maxNum = (x > maxNum) ? x : maxNum;
    }

    int l = 0, r = maxNum;

    while(l+1 < r) {
        int m = (l+r) / 2;
        long long sum = 0;
        for(int i=0; i<N; i++) {
            sum += max(arr[i]-m, 0);
        }
        if(sum >= M) l = m;
        else r = m;
    }

    cout << l << '\n';

    return 0;
}