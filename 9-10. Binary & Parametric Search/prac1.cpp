#include <bits/stdc++.h>

using namespace std;

int N, arr[100004];

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;
    for(int i=1; i<=N; i++) cin >> arr[i];

    sort(arr+1, arr+N+1);

    int M;
    cin >> M;

    for(int i=0; i<M; i++) {
        int x;
        cin >> x;

        int l = 0, r = N+1;

        while(l+1 < r) {
            int m = (l+r) / 2;
            if(arr[m] < x) l = m;
            else r = m;
        }

        cout << (arr[r] == x) << '\n';

    }


    return 0;
}