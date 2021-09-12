#include <bits/stdc++.h>

using namespace std;

const int maxV = 10000;

int V, E;

int deg[maxV];

int g[maxV][maxV];

bool flag=true;

int main(void) {
    cin >> V >> E;

    for(int i=0; i<E; i++) {
        int x, y;
        cin >> x >> y;

        if(x==y) {
            flag = false;
        }

        if(g[x][y] != 0) {
            flag = false;
        }

        deg[x]++; // deg[maxV] == V-1 이면 
        deg[y]++;
        g[x][y]++;
        g[y][x]++;
    }

    for(int i=0; i<=V; i++) {
        if(deg[i] != V-1) {
            flag = false;
            break;
        }
    }


    return 0;
}