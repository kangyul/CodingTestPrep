#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        string str;
        cin >> str;

        int l = 0, r = str.size()-1;
        bool flag = true;
        int chance=0;

        for(int j=0; j<str.size()/2; j++) {
            if(str[l] != str[r]) {
                flag = false;
                if(chance) { // 1

                } else { // 2
                    chance++;
                    break;
                }
            }
            l++;
            r--;
        }

        if(flag) {
            cout << '0' << '\n';
        } else {
            if(chance) {

            }
        }
    }

    return 0;
}