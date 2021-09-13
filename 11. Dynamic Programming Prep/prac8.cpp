#include <bits/stdc++.h>

using namespace std;

bool check(string str, int s, int e) {
    while (s<=e) {
        if(str[s] != str[e]) {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

void solve() {
    string str;
    cin >> str;

    int s = 0;
    int e = str.size() - 1;

    while(s <= e) {

        if(str[s] != str[e]) {
            // 유사 회문
            if(check(str, s+1, e) || check(str, s, e-1)) {
                cout << '1' << '\n';
                return;
            }
            // 회문 x 
            else {
                cout << '2' << '\n';
                return; 
            }
        }

        s++;
        e--;
    }

    // 회문인 경우
    cout << '0' << '\n';
}

int main(void) {

    int T;
    cin >> T;

    while(T--) {
        solve();    
    }

    return 0;
}