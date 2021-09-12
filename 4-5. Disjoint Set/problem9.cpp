#include <iostream>
#include <numeric>
#include <vector>
const int maxn = 1010101;


using namespace std;


struct dsu {
    dsu () { iota(p, p+maxn, 0); }
    int p[maxn];
    int root(int k) {return p[k] != k ? p[k] = root(p[k]) : k; }
    bool connect(int  x, int y) {
        x = root(x); y = root(y);
        if(x==y) return false;
        p[y] = x;
        return true;
    }

} d;

int N, M;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;

    int enemy[N+1];

    iota(enemy, enemy+N+1, 0);

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;

        if(d.root(x) == d.root(y)) {
            cout << "IMPOSSIBLE" << '\n';
            return 0;
        }

        if(enemy[x] != x) {
            d.connect(enemy[x], y);
        } else {
            enemy[x] = y;
        }

        if(enemy[y] != y) {
            d.connect(enemy[y], x);
        } else {
            enemy[y] = x;
        }
       
    }

    cout << "POSSIBLE" << '\n';

    return 0;
}