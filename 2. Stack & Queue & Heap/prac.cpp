#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(void) {

    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;

        if(x) {
            pq.push(x);
        } else {
            if(pq.empty()) {
                cout << '0' << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }

    return 0;
}