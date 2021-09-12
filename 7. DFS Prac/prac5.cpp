#include <bits/stdc++.h>

using namespace std;

bool visited[10101];
vector<int> graph[10101];
int hacking[10101];

int ans=-1;

int dfs(int x) {
    int cnt=1;
    visited[x] = true;
    for(int y : graph[x]) {
        if(!visited[y]) {
            cnt += dfs(y);
            // hacking[y] = dfs(y);
        }    
    }
    return cnt;
}

int main(void) {

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        graph[y].push_back(x);
    }

    for(int i=1; i<=N; i++) {
        fill(visited, visited+10101, false);
        hacking[i] = dfs(i);
        if(hacking[i] > ans) ans = hacking[i];       
    }

    // 2. dfs 호출 후, visited true 값 카운트

    for(int i=1; i<=N; i++) {
        if(hacking[i] == ans) {
            cout << i << ' ';
        }
    }

    return 0;
}