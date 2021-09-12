#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> vec;
int dist[5004];

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);


    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }

    int arr[N];
    for(int i=0; i<N; i++) {
        arr[i] = 0;
    }

    int min = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            int x = vec[i].first;
            int y = vec[i].second;
            x -= vec[j].first;
            y -= vec[j].second;
            x = (x<0) ? -1*x : x;
            y = (y<0) ? -1*y : y;
            arr[i] += (x+y);
        }
        if(i==0) min = arr[i];
        min = (min > arr[i]) ? arr[i] : min;
    }

    for(int i=0; i<N; i++) {
        if(arr[i] == min) {
            cout << (i+1) << '\n';
        }
    }

    return 0;
}