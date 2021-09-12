#include <bits/stdc++.h>

using namespace std;

bool visited[111];
vector<int> graph[111];

void dfs(int x) {
    visited[x] = true;
    for(int i=0; i<graph[x].size(); i++) {
        int y = graph[x][i];
        if(!visited[y]) dfs(y);
    }
}

int main(void) {
    
    int C, N;
    cin >> C >> N;

    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(1);

    int cnt=0;

    for(int i=1; i<=C; i++) {
        if(visited[i]) cnt++;
    }

    cout << cnt-1 << '\n';

    return 0;
}