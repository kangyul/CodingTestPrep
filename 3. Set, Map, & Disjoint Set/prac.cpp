#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int A, B;
    cin >> A >> B;

    set<int> setA;
    set<int> setB;

    for(int i=0; i<A; i++) {
        int x;
        cin >> x;
        setA.insert(x);
    }

    for(int i=0; i<B; i++) {
        int x;
        cin >> x;
        setB.insert(x);
    }

    int sum=0;

    for(int x : setA) {
        if(setB.find(x) != setB.end()) {
            sum += 2;
        }
    }

    int ans = A + B - sum;

    cout << ans << '\n';

    return 0;
}