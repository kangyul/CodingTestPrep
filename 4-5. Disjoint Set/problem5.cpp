#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
const int maxn = 55;
int arr[maxn];

int N, M;
int cnt; // ans
bool knowTruth[55];

vector<int> v[55];

void initialize() {
    iota(arr, arr+maxn, 0);
}

int root(int x) {
    if(arr[x]==x) return x;
    else return arr[x] = root(arr[x]);
}

void connect(int x, int y) {
    x = root(x); y = root(y);
    if(x==y) return;
    else arr[x] = y;

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    initialize();
    cin >> N >> M;

    cnt = M;

    for (int i=1; i<=N; i++) knowTruth[i] = false;

    int size;
    cin >> size;

    for(int i=0; i<size; i++) {
        int x;
        cin >> x;
        knowTruth[x] = true;
    }

    for(int i=0; i<M; i++) {
        cin >> size;
        v[i].resize(size);

        for(int j=0; j<size; j++) {
            cin >> v[i][j];
            if(j==0) continue;
            connect(v[i][j-1], v[i][j]);
        }    
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<v[i].size(); j++) {
            if(knowTruth[v[i][j]] == true) {
                knowTruth[root(v[i][j])] = true;
            }
        }
    }

    for(int i=0; i<M; i++) if(v[i].size()>0) {
        if(knowTruth[root(v[i][0])] == true) {
            cnt--;
        }
    }

    cout << cnt << '\n';

    return 0;
}