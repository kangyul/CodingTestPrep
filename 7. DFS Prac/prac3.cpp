#include <bits/stdc++.h>

using namespace std;

bool visited[1010];
vector<int> graph[1010];

void dfs(int x) {
    visited[x] = true;
    for(int i=0; i<graph[x].size(); i++) {
        int y = graph[x][i];
        if(!visited[y]) dfs(y);
    }
}

int main(void) {

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int cnt=0;

    for(int i=1; i<= N; i++) {
        if(!visited[i]) {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << '\n';

    return 0;
}