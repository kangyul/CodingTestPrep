#include <bits/stdc++.h>

using namespace std;

typedef struct 
{
    int x;
    int y;
} Position;

bool cmp(const Position& p1, const Position& p2) {
    return p1.x < p2.x;
}

int main(void) {

    int N;
    cin >> N;
    Position *arr = new Position[N];

    for(int i=0; i<N; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+N, cmp);

    int ans = arr[0].x + arr[0].y;

    for(int i=1; i<N; i++) {
        if(arr[i].x > ans) {
            ans = arr[i].x + arr[i].y;
        } else {
            ans += arr[i].y;
        }
    }

    cout << ans << '\n';

    return 0;
}