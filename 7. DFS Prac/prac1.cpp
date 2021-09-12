#include <bits/stdc++.h>

using namespace std;

bool visited[1010];
vector<int> graph[1010];

void dfs(int x) {
    visited[x] = true;
    cout << x << ' ';
    for(int i=0; i<graph[x].size(); i++) {
        int y = graph[x][i];
        if(!visited[y]) dfs(y);
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i=0; i<graph[x].size(); i++) {
            int y = graph[x][i];
            if(!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int N, M, V;
    cin >> N >> M >> V;

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=1; i<=N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << '\n';
    for(int i=0; i<=N; i++) {
        visited[i] = false;
    }

    bfs(V);

    return 0;
}