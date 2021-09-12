#include <bits/stdc++.h>

using namespace std;

int N;
int ans;
vector<int> vec;

priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
    cin >> N;

    if(N==1) {
        cout << '0' << '\n';
        return 0;
    }

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    while(!pq.empty()) {
        int a = pq.top();
        pq.pop();
        int b  = pq.top();
        pq.pop();

        ans += a+b;

        if(pq.empty()) break;

        pq.push(a+b);

    }
    

    cout << ans << '\n';

    return 0;
}