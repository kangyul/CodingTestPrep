#include <bits/stdc++.h>

using namespace std;

queue<int> q;
queue<int> ans;

int main(void) {
    
    int N, K;
    cin >> N >> K;

    for(int i=1; i<=N; i++) {
        q.push(i);
    }

    while(!q.empty()) {
        for(int i=0; i<K-1; i++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        ans.push(q.front());
        q.pop();
    }

    cout << '<';

    for(int i=0; i<N; i++) {
        if(i==0) {
            cout << ans.front();
            ans.pop();
        } else {
            cout << ", " << ans.front();
        }
    }

    cout << '>' << '\n';

    return 0;
}