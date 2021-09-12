#include <bits/stdc++.h>

using namespace std;

int A, B, C, N;


int main(void) {
    cin >> A >> B >> C >> N;

    int ans=0;

    for(int i=0; i<=50; i++) {
        for(int j=0; j<=50; j++) {
            for(int k=0; k<=50; k++) {
                if(i*A+j*B+k*C == N) {
                    ans = 1;
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
    
    return 0;
}