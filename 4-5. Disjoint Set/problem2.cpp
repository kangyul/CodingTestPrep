#include <iostream>
#include <numeric>

using namespace std;

const int maxn = 300004;

int arr[maxn];

void initialize() {
    iota(arr, arr+maxn, 0);
}

int root(int x) {
    if(arr[x] == x) return x;
    else return arr[x] = root(arr[x]);
}

void connect(int x, int y) {
    x = root(x); y = root(y);
    if(x == y) return; 
    arr[x] = y;
}

int N;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;
    initialize();
    for(int i=0; i<N-2; i++) {
        int x, y;
        cin >> x >> y;
        connect(x, y);
    }

    for(int i=1; i<N; i++) {
        if(root(arr[i]) != root(arr[i+1])) {
            cout << arr[i] << ' ' << arr[i+1];
            break;
        }
    }

    return 0;
}