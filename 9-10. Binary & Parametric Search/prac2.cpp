#include <bits/stdc++.h>

using namespace std;

int N, M;
int arr[100004];

int main(void) {

    int min = 1000000;

    cin >> N >> M;

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr+N);

    for(int i=0; i<N; i++) {
        int l = 0, r = N-1;

        while(l+1 < r) {
            int m = (l+r) / 2;
            if(arr[m]-arr[i] < M)  l = m;
            else r = m;
        }

        int sub = arr[r]-arr[i];

        if(sub >= M && sub < min) min = sub;
    }

    cout << min << '\n';

    return 0;
}
