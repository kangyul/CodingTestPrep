#include <bits/stdc++.h>

using namespace std;

const int maxn = 100004;
vector<int> graph[maxn];
bool visited[maxn];
int dist[maxn];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    
    while(!q.empty()) {
        int x = q.front();

        for(int y : graph[x]) if(!visited[y]) {
            q.push(y);
            visited[y] = true;
            dist[y] = dist[x] + 1;
        }
    }
}

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[y].push_back(x);
    }

    return 0;
}