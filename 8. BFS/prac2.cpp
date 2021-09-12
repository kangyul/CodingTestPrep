#include <bits/stdc++.h>

using namespace std;

bool visited[101];
vector<int> graph[101];
int dist[101];

void bfs(int start) {
    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int i : graph[x]) if(!visited[i]) {
            q.push(i);
            visited[i] = true;
            dist[i] = dist[x] + 1;
        }
    }
}

int main(void) {

    int n;
    cin >> n;
    int n1, n2;
    cin >> n1 >> n2;
    int m;
    cin >> m;
    for(int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs(n1);
    
    int ans = (dist[n2] ? dist[n2] : -1);

    cout << ans << '\n';

    return 0;
}