#include <bits/stdc++.h>

using namespace std;

const int maxn = 1004;
bool visited[maxn];
vector<int> graph[maxn];
int dist[maxn];

void bfs(int start) {
    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int y : graph[x]) if(!visited[y]) {
            q.push(y);
            visited[y] = true;
            dist[y] = dist[x] + 1;
        }
    }
}

int main(void) {

    int a, b;
    cin >> a >> b;

    if(a==b) {
        cout << '0' << '\n';
        return 0;
    }

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs(a);

    int ans;
    ans = (dist[b]) ? dist[b] : -1;

    cout << ans << '\n';

    return 0;
}