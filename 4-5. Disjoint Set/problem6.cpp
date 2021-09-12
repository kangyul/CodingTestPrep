// 6. 섞기 수열

#include <iostream>
#include <numeric>
#include <set>

using namespace std;
const int maxn = 20202;
set<int> s;

struct dsu
{
    dsu () { iota(p, p+maxn, 0); }
    int p[maxn];
    int root(int k) { return (p[k]==k) ? k : p[k] = root(p[k]); }
    bool connect(int x, int y) {
        x = root(x); y = root(y);
        if(x==y) return false;
        p[y] = x;
        return true;
    }
} d;

int gcd(int x, int y) {
    return (y==0) ? x : gcd(x, y);
}

int lcm(int x, int y) {
    return x * y / gcd(y, x%y);
}


int N;
int cnt;

int main() {
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        d.connect(i+1, x);
    }

    for(int i=0; i<N; i++) {
        s.insert(d.root(arr[N]));
    }

    return 0;
}