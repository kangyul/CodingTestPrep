#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pqP; // positive nums
priority_queue<int> pqN; // negative nums

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    int x=0;
    
    for(int i=0; i<N; i++) {
        cin >> x;
        if(x == 0) {
            if(pqP.empty() && pqN.empty()) cout << "0" << '\n';
            else if(pqP.empty()) {
                cout << pqN.top() << '\n';
                pqN.pop();
            }
            else if(pqN.empty()) {
                cout << pqP.top() << '\n';
                pqP.pop();
            }
            else {
                if(pqP.top() < -pqN.top()) {
                    cout << pqP.top() << '\n';
                    pqP.pop();
                } else {
                    cout << pqN.top() << '\n';
                    pqN.pop();
                }
            }
        } else if(x > 0) {
            pqP.push(x);
        } else if(x < 0) {
            pqN.push(x);
        }
    }

    return 0;
}
