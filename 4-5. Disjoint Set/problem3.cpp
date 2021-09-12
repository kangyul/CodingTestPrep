#include <iostream>
#include <numeric>

using namespace std;

const int maxn = 40004;
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
    else arr[x] = y;
}

int main() {
    initialize();
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                connect(i, j);
            }
        }
    }

    int current=0, prev=0;

    for(int i=0; i<m; i++) {
        cin >> current;
        if(i == 0) {
            prev = current;
            continue;
        }

        if(root(arr[current]) != root(arr[prev])) {
            cout << "NO";
            return 0;
        }
        prev = current; 
    }

    cout << "YES";

    return 0;
}