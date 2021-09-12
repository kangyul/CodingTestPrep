#include <bits/stdc++.h>

using namespace std;

const int maxn = 111;
bool visited[maxn];
vector<int> graph[maxn];
int dist[maxn];
int kbN[maxn];

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

    int N, M;
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int min = 5555;

    for(int i=1; i<=N; i++) {
        fill(dist, dist+maxn, 0);
        fill(visited, visited+maxn, false);
        bfs(i);
        for(int j=1; j<=N; j++) {
            kbN[i] += dist[j];
        }
        kbN[i] -= dist[i];
        if(min > kbN[i]) min = kbN[i];
    }

    for(int i=1; i<=N; i++) {
        if(kbN[i] == min) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}