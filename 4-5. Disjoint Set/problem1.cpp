#include <iostream>
#include <numeric>

const int maxn = 1010101;

using namespace std;

int N, M;
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    initialize();
    for(int i=0; i<M; i++) {
        int k,x,y;
        cin >> k >> x >> y;

        if(k) cout << (root(x) == root(y) ? "YES" : "NO") << '\n';
        else connect(x, y);
    }
    return 0;
}