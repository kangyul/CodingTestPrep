#include <bits/stdc++.h>

using namespace std;

int arr[10101];

int main(void) {

    int K, N;
    cin >> K >> N;

    for(int i=0; i<K; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    long long l = 0;
    long long r = 2147483648;

    while(l+1 < r) {
        long long sum = 0;
        long long m = (l+r)/2;

        for(int i=0; i<K; i++) {
            sum += arr[i] / m;
        }

        if(sum >= N) l = m;
        else r = m;
    }

    cout << l << '\n';

    return 0;
}