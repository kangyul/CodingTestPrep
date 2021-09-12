#include <bits/stdc++.h>

using namespace std;

set<int> s1;
set<int> s2;

int A, B;
int intersect;

int main(void)
{
    cin >> A >> B;

    for(int i=0; i<A; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }

    for(int i=0; i<B; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    for(int num : s1) {
        if(s2.find(num) != s2.end()) {
            intersect+=2;
        }
    }

    int ans = A+B-intersect;

    cout << ans << '\n';

    return 0;
}