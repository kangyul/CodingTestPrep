#include <bits/stdc++.h>

using namespace std;

const int maxn = 1004;
bool visited[maxn];
vector<int> graph[maxn];

void dfs(int x) {
    visited[x] = true;
    cout << x << ' ';
    for(int y : graph[x]) {
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
        for(int y : graph[x]) if(!visited[y]) {
            q.push(y);
            visited[y] = true;
        }

    }
}

int main(void) {
    
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

    for(int i=1; i<=N; i++) {
        visited[i] = false;
    }

    cout << '\n';

    bfs(V);

    return 0;
}